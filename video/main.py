from manim import *

class main(Scene):
    def start(self):
        self.wait(2)
        image = ImageMobject("szy-noback.png")
        image.scale(0.2).scale(0.4)
        
        text = Text('Stats-102 Final Project (midterm)')
        tag = Text('I\'m avatar of Zhiyuan Shen')
        tag.scale(0.2)
        self.play(Write(text))
        tag.move_to([4.2, -3.8, 0])
        image.move_to([5.5, -3, 0])
        self.wait(2)
        
        self.play(text.animate.move_to(UP * 3), FadeIn(image), FadeIn(tag))
        self.wait(2)
        
        # 添加三行目录
        line1 = Text('1. 3-colorability').scale(0.7)
        line2 = Text('2. Tree Decomposition').scale(0.7)
        line3 = Text('3. Prediction through Machine Learning').scale(0.7)
        
        # 将第一行目录放置在标题的左下方
        line1.next_to(text, DOWN + LEFT, buff=0.5)  # 在左下方，并留出一点间距
        line1.align_to(text, LEFT)  # 与标题左对齐
        
        # 将第二行目录放置在第一行的下方，并左对齐
        line2.next_to(line1, DOWN, buff=0.2)  # buff 调整行间距
        line2.align_to(line1, LEFT)  # 与第一行左对齐
        
        # 将第三行目录放置在第二行的下方，并左对齐
        line3.next_to(line2, DOWN, buff=0.2)
        line3.align_to(line2, LEFT)
        
        # 播放三行目录的写入动画
        self.play(Write(line1))
        self.play(Write(line2))
        self.play(Write(line3))

        # 等待 2 秒
        self.wait(2)
         
        self.play(FadeOut(line1), FadeOut(line2), FadeOut(line3), FadeOut(text))
    
    def part1(self):
        title = Text('3-colorability')
        title.move_to(UP * 3)
        self.play(Write(title))
        
        vertices = ["A", "B", "C", "D"]
        vertex_config = {
            "A": {"fill_color": RED, "radius": 0.3},
            "B": {"fill_color": GREEN, "radius": 0.3},
            "C": {"fill_color": BLUE, "radius": 0.3},
            "D": {"fill_color": BLUE, "radius": 0.3}
        }
        edges = [("A", "B"), ("A", "C"), ("A", "D")]
        tree = Graph(vertices, edges, root_vertex='A', layout="tree", vertex_config=vertex_config)
        tree.move_to(3*LEFT + UP)
        self.play(Create(tree))
        self.wait(2)
        
        vertices = ["A", "B", "C", "D"]
        vertex_config = {
            "A": {"fill_color": RED, "radius": 0.3},
            "B": {"fill_color": GREEN, "radius": 0.3},
            "C": {"fill_color": BLUE, "radius": 0.3},
            "D": {"fill_color": DARK_BROWN, "radius": 0.3}
        }
        edges = [("A", "B"), ("A", "C"), ("A", "D"), ("B", "C"), ("B", "D"), ("C", "D")]
        graph = Graph(vertices, edges, vertex_config=vertex_config)
        graph.move_to(3*RIGHT + UP)
        self.play(Create(graph))
        self.wait(3)
        
        self.play(FadeOut(graph))
        self.wait(3)
        
        R = RED
        B = BLUE
        G = GREEN
        self.play(tree["B"].animate.set_fill(B))
        self.wait(1)
        self.play(tree["A"].animate.set_fill(G))
        self.wait(1)
        self.play(tree["C"].animate.set_fill(R))
        self.wait(1)
        
        self.wait(2)
        self.play(FadeOut(tree), FadeOut(title))
    
    def part2(self):
        title = Text('Tree Decomposition')
        title.move_to(UP * 3)
        self.play(Write(title))
        self.wait(2)
        
        image = ImageMobject("Fig-1.png")
        image.scale(3.0)
        self.play(FadeIn(image))
        self.wait(1)
        
        
        self.play(FadeOut(image), FadeOut(title))
        
        self.wait(2)
    
    def part3(self):
        title = Text('Prediction through Machine Learning')
        title.move_to(UP * 3)
        self.play(Write(title))
        
        graph_text = Text("G", color=WHITE).to_edge(LEFT)

        # 创建"Tree Decomposition"文本对象
        tree_decompositions = VGroup(
            Text("Tree Decomposition 1"),
            Text("Tree Decomposition 2"),
            Text("Tree Decomposition 3"),
        ).arrange(DOWN, aligned_edge=LEFT).next_to(graph_text, RIGHT, buff=1.5)

        # 创建"Run Time"文本对象
        run_times = VGroup(
            Text("Run Time 1"),
            Text("Run Time 2"),
            Text("Run Time 3"),
        ).arrange(DOWN, aligned_edge=LEFT).next_to(tree_decompositions, RIGHT, buff=2)

        # 创建箭头从"graph"指向每个"Tree Decomposition"
        arrows_to_decompositions = VGroup(*[
            Arrow(graph_text.get_right(), td.get_left(), buff=0.1)
            for td in tree_decompositions
        ])

        # 创建箭头从每个"Tree Decomposition"指向对应的"Run Time"
        arrows_to_runtimes = VGroup(*[
            Arrow(td.get_right(), rt.get_left(), buff=0.1)
            for td, rt in zip(tree_decompositions, run_times)
        ])

        # 将所有对象添加到场景中
        self.play(FadeIn(graph_text), FadeIn(tree_decompositions), FadeIn(run_times), FadeIn(arrows_to_decompositions), FadeIn(arrows_to_runtimes))
        self.wait(2)
        self.play(FadeOut(graph_text), FadeOut(tree_decompositions), FadeOut(run_times), FadeOut(arrows_to_decompositions), FadeOut(arrows_to_runtimes))
        
        
        # 创建文本对象
        graph_text = Text("Graph").to_edge(LEFT)
        tree_decomposition_text = Text("Tree Decomposition").next_to(graph_text, RIGHT, buff=1)
        runtime_text = Text("Run Time").next_to(tree_decomposition_text, RIGHT, buff=1)
        solver_text = Text("Solver").scale(0.5).next_to(graph_text, RIGHT*14, buff=0.5).shift(UP*0.5)

        # 创建箭头对象
        arrow_graph_to_tree = Arrow(graph_text.get_right(), tree_decomposition_text.get_left(), buff=0.1)
        arrow_tree_to_runtime = Arrow(tree_decomposition_text.get_right(), runtime_text.get_left(), buff=0.1)

        # 将所有对象添加到场景中，但是先不显示
        self.add(graph_text, tree_decomposition_text, runtime_text)

        # 显示第一个箭头和"Solver"文本
        self.play(GrowArrow(arrow_graph_to_tree))
        self.wait(0.5)

        # 显示第二个箭头
        self.play(GrowArrow(arrow_tree_to_runtime), Write(solver_text))
        self.wait(0.5)

        # 保持场景
        self.wait(2)
        self.play(FadeOut(arrow_graph_to_tree), FadeOut(arrow_tree_to_runtime), FadeOut(solver_text))
        self.play(FadeOut(graph_text), FadeOut(tree_decomposition_text), FadeOut(runtime_text))
        
        self.wait(2)
        graph_text = Text("G", color=WHITE).to_edge(LEFT)
        predictor_text = Text('predictor').next_to(arrows_to_runtimes).move_to(1.3 * UP + 2.4 * RIGHT).scale(0.5)
        self.play(FadeIn(graph_text), FadeIn(tree_decompositions), FadeIn(run_times), FadeIn(arrows_to_decompositions), FadeIn(arrows_to_runtimes), FadeIn(predictor_text))
        
        self.wait(1)
        self.play(tree_decompositions[2].animate.set_color(RED))
        self.wait(1)
        
        runtime_text_2 = Text('Run Time').move_to(DOWN * 2)
        arraow = Arrow(tree_decompositions[2].get_bottom(), runtime_text_2.get_top())
        solver_text.next_to(arraow)
        self.play(Write(runtime_text_2), Write(solver_text), FadeIn(arraow))
        
        self.wait(2)
        self.play(FadeOut(runtime_text_2), FadeOut(solver_text), FadeOut(arraow), FadeOut(graph_text), FadeOut(tree_decompositions), FadeOut(arrows_to_decompositions), FadeOut(arrows_to_runtimes), FadeOut(predictor_text), FadeOut(run_times))
        
        self.wait(2)
        self.play(FadeOut(title))
        
    
    def construct(self):
        self.start()
        self.part1()
        self.part2()
        self.part3()
        
        pass