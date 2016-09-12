#pragma once
/*
* Copyright 2016 Huy Cuong Nguyen
* Copyright 2016 ZXing authors
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*      http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/
#include <array>

namespace ZXing {
namespace OneD {

namespace UPCEANPatterns
{
	/**
	* Start/end guard pattern.
	*/
	static const std::array<int, 3> START_END_PATTERN = { 1, 1, 1 };

	/**
	* end guard pattern.
	*/
	static const std::array<int, 6> END_PATTERN = { 1, 1, 1, 1, 1, 1 };

	/**
	* "Odd", or "L" patterns used to encode UPC/EAN digits.
	*/
	static const std::array<std::array<int, 4>, 10> L_PATTERNS = {
		3, 2, 1, 1, // 0
		2, 2, 2, 1, // 1
		2, 1, 2, 2, // 2
		1, 4, 1, 1, // 3
		1, 1, 3, 2, // 4
		1, 2, 3, 1, // 5
		1, 1, 1, 4, // 6
		1, 3, 1, 2, // 7
		1, 2, 1, 3, // 8
		3, 1, 1, 2, // 9
	};

	/**
	* Pattern marking the middle of a UPC/EAN pattern, separating the two halves.
	*/
	static const std::array<int, 5> MIDDLE_PATTERN = { 1, 1, 1, 1, 1 };

	/**
	* As above but also including the "even", or "G" patterns used to encode UPC/EAN digits.
	*/
	static const std::array<std::array<int, 4>, 20> L_AND_G_PATTERNS = {
		3, 2, 1, 1, // 0
		2, 2, 2, 1, // 1
		2, 1, 2, 2, // 2
		1, 4, 1, 1, // 3
		1, 1, 3, 2, // 4
		1, 2, 3, 1, // 5
		1, 1, 1, 4, // 6
		1, 3, 1, 2, // 7
		1, 2, 1, 3, // 8
		3, 1, 1, 2, // 9
		// reversed
		1, 1, 2, 3, // 10
		1, 2, 2, 2, // 11
		2, 2, 1, 2, // 12
		1, 1, 4, 1, // 13
		2, 3, 1, 1, // 14
		1, 3, 2, 1, // 15
		4, 1, 1, 1, // 16
		2, 1, 3, 1, // 17
		3, 1, 2, 1, // 18
		2, 1, 1, 3, // 19
	};
};

} // OneD
} // ZXing
