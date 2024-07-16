
function _boot()
	print("Hello from bigas!")
	x = 0
	draw_x = -16
	width = 20 * 18
	height = (16 * 16)
	half_y = height / 2
end

function _update()
	x = x + 8
	draw_x = ((x) % (width)) - 16
end

function _draw()
	clear()

	-- Pixel test
	for pix_x = 0, width do
		for pix_y = 0, height do
			if (pix_x + pix_y) % 16 == 0 then
				pixel(12, pix_x, pix_y)
			end
		end
	end

	-- Stamp and rect test
	rect()
	stamp(2, 1, draw_x, half_y)

end
