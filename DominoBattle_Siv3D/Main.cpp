# include <Siv3D.hpp> // Siv3D v0.6.14

void Main()
{
	// 背景の色を設定する | Set the background color
	Scene::SetBackground(ColorF{ 0.6, 0.8, 0.7 });

	// ウィンドウサイズを 1280x720 にする | Set the window size to 1280x720
	Window::Resize(1280, 720);

	Grid<int32> map(60, 30);

	double squareSize = 20.0;

	while (System::Update())
	{
		for (int32 y = 0; y < map.height(); ++y)
		{
			for (int32 x = 0; x < map.width(); ++x)
			{
				const Rect rect(x * squareSize, y * squareSize, squareSize, squareSize);
				rect.drawFrame(1,Palette::Black);
				map[y][x] = 0;
			}
		}
	}
}

