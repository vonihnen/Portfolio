clear all
close all
clc

F_c = 3200; %cut-off frequency
F_stop = 2800; %stop-band edge frequency
F_s = 8000; % sampling frequency
a_s = 40; % attenuation at frequency F_stop in dB

design_filter(F_c,F_stop,F_s,a_s);