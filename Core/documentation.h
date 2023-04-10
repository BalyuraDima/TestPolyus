/** @file documetation.h
    @brief <h1>������������ �� ��������� �������</h1>
	  @author <a href="mailto://balura_pe99a@rambler.ru">������ ������� ����������</a>
		@details
		������ ���� ��������� ��� ���������������� ������������ �������
*/
/** @mainpage 
 * ������ ����������� ������:
 * - ���������� ����������� ������ �������� �� ����� ��� � �������������� DMA c �������������� 5��� (200���);
 * - ��������� ������������ ������ ��� �� ������ PWM ��� � 20 �� (50��) (������������ �������� ��������������� ���� ���);
 * - ������ ������������ �������� �� 1 ������� �������� �� SWD ���������� � ��������� Keil, ���������� �������� �������� � ���� �������, ������ ������������� ASCII 
 * ����� � �������� �������� ������ �� ����� (������ "1500��\r\n").
		- @ref Exercise
		- @ref Task_completion
		- @ref Task_results
*/



/** @page Exercise �������.
 * - ���������� ����������� ������ �������� �� ����� ��� � �������������� DMA c �������������� 5��� (200���);
 * - ��������� ������������ ������ ��� �� ������ PWM ��� � 20 �� (50��) (������������ �������� ��������������� ���� ���);
 * - ������ ������������ �������� �� 1 ������� �������� �� SWD ���������� � ��������� Keil, ���������� �������� �������� � ���� �������, ������ ������������� ASCII 
 * ����� � �������� �������� ������ �� ����� (������ "1500��\r\n").
*/

/** @page Task_completion ���������� �������.
\image html NUCLEO.jpg
	������ ����� ���������� � �������� �� ���������� ����� NUCLEO-F072RB ��������� ��������� ���������:
- @ref STM32CubeMX v.6.5.0
- @ref uVision v.5.36.0.0

@section STM32CubeMX ��������� ������� � ���������� ���� STM32CubeMX
��������� ������� � ���������� ���� STM32CubeMX ������������ ����� ��������� ��������
������������ ���������� �������. ������� � ������ ���������  ������ ����� PC3. ������ ����� ����� ���������k�� � ��������������� ��������� ������ ��� �� ��������� �������� ������ ������� DMA � ������ ADC_Data[100].
\image html GPIO.jpg
�� ���� �������� ������ GPIO ����� ������� �����������.<br>
�������� � ��������� ������ ������������ RCC. 
\image html SYS.jpg
�������� ����������� ���������. ����� � �������� ���� ��� �������� ������� ���������� ��������� ������ ���� SysTick. 
�� ����������� ��� ��� ����������� ����������� ������ � ����������� ���� stdout.
\image html SYS.jpg
��������� � ��������� ���������� �������, ������������ � �������.
\image html ADC.jpg
��� ����� ����������� ������� ���������� ���� IN0. �������� ������ ��� �� �������� ������� �� ������� TMR2. 
������������ �� ���������� RC-����������. ����� �������� ������ DMA �� ��������� �������������� ��� ���������� 
���������� � ������ ����������������.
�� ���� ��������� ������ ��� ����� ������� �����������. ��������� � ��������� ������ ���.
\image html TIM2.jpg
������� ������������ ������� - 48��� (������� ����������� RC-����������). ����� �������� ��������� ������� 5���
���������� ������� ������� ��������� �� 9600 -1, ��� ��� ���� ���� � 0. ��� �� ��� ����������� ������� �������������� ������� ��� ��������
TRGO �� ������� Update Event.
�������� ������� ��������� ������������� ��������� ���������������� ������.
\image html TIM3.jpg
�� ������� ������������ ������������ �������� 20��, ��� ������������� ������������� �������� ��� 4095. ���� ������� ������������� ������� 48���, ��������� �������� ������������ � ������� ��� ��������� ��������:
20�� - 4095
x    - 1 ��� �������
x = 48000000((0.02 * 1) / 4095) = 234.43
����� ������� �������� ������������ ����� ����� 234. �������� ������������ �������� ��� ������ 4095, ��������� �������� ������� � ��� ���� ������ 8192 - 1.
� ������ ��� ����������� 1 ����� �� ����� ����� PA6. <br>
��� �������������� ������� ��� � �������� 5���, �������� ������ 2 � ��������� �������� ������� �� ���������� �������.
\image html ProjectManager.jpg
����� ���������� ������� � CubeMx ��������� �������� ������ ��������� ������ ���.
@section uVision ���������� ������� � ����� Keil uVision
������, ������ ������ ��������� ������� HAL � LL, ������ ����������� ���������� CMSIS ������� �� ��������� �������:
- @link main.c  @endlink
- @link stm32f0xx_it.c  @endlink
- @link stdout.c ������ ��������������� ������������ ������ stdout @endlink
*/

/** @page Task_results ������ ����������� ��������������.
������ �������������� �������������� ����� ������ �� ���� ����� ������� � ���������� � 
������ ���������� ����������� ��� ������ ������������ � � ���� Debug (printf) Viewer.
@section Sine_sec ������ ����������������� ������ �������� ������ � ������ ��� �� PWM
� ������ ����� ������� �� ���� ��� �������������� ������ �������� 10� ���������� 3.3� � ��������� 1.65�.
������ ������������� ��������:
 - 1 ����� ������������ - ������ PWM out (PC3).
 - 2 ����� ������������ - ������ c ��������� ����������.
 - 3 ����� ������������ - ������ � ���������� ����� Debug Pin (�������� ������ 20 �� �� ��������� �������������� ��� � ��������� � ������ ������)
\image html Oscill.jpg
�� �������������� ������ ����� ���������� �������� ������� � ������� 20���� � �������� ���������� � ���� ������������ ������������� ��������� ���.
\image html Keil.jpg
� ���������� ���� ��������� Keil �� ����� ������������ �������� ����������� �������� ���������� ��� � 1 ���.

*/