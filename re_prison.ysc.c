#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	bool bLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	vector3 vLocal_53[12] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_54 = 0;
	bool bLocal_55 = 0;
	int iLocal_56 = 0;
	var uLocal_57 = 0;
	bool bLocal_58 = 0;
	int iLocal_59[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_60 = 0;
	bool bLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	struct<7> Local_70 = { 0, 0, 1097859072, 1500, 45, 1103626240, 5 } ;
	var uLocal_71 = 0;
	int iLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	int iLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 16;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	vector3 vLocal_248 = { 0f, 0f, 0f };
	int iLocal_249 = 0;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	struct<76> Local_252 = { 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	int iLocal_263[3] = { 0, 0, 0 };
	int iLocal_264[3] = { 0, 0, 0 };
	int iLocal_265[3] = { 0, 0, 0 };
	float fLocal_266 = 0f;
	bool bLocal_267 = 0;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	struct<13> Local_270[10];
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	bool bLocal_292 = 0;
	int iLocal_293 = 0;
	bool bLocal_294 = 0;
	int iLocal_295 = 0;
	var uLocal_296[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_297[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_298 = 0;
	int iLocal_299 = 0;
	var uLocal_300 = 0;
	int iLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	vector3 vLocal_305 = { 0f, 0f, 0f };
	int iLocal_306 = 0;
	struct<41> Local_307 = { 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 3, 0, 0, 0, 4 } ;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_266 = 0f;
	bLocal_267 = true;
	vLocal_305 = { 1683.682f, 2518.867f, 44.5651f };
	if (unk_0xE8A79675302ED812(3))
	{
		func_83(0);
	}
	iLocal_247 = unk_0xBC25C936A095B5BA();
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		unk_0x9170995FA0550E1C(unk_0xB5CEFD608600A09F());
	}
	while (true)
	{
		if (unk_0x1D403DFADBC2DE3C(iLocal_247, 0))
		{
			func_83(0);
		}
		func_82();
		vLocal_248 = { unk_0x541C2AEF053615BC(iLocal_247, true) };
		switch (iLocal_246)
		{
			case 0:
				func_80();
				iLocal_246 = 1;
				break;
			
			case 1:
				if (!Global_62C5)
				{
					func_79();
					func_78();
					func_77();
					func_75();
					iLocal_246 = 2;
				}
				break;
			
			case 2:
				if ((((func_74() && func_73()) && func_72()) && func_71()) && func_70())
				{
					iLocal_246 = 3;
				}
				break;
			
			case 3:
				func_64();
				SYSTEM::WAIT(0);
				func_63();
				SYSTEM::WAIT(0);
				func_60();
				func_59();
				iLocal_246 = 4;
				break;
			
			case 4:
				if (!Global_62C5)
				{
					if (Global_15FAC)
					{
						func_83(0);
					}
					func_34();
					func_33();
					func_30();
					func_29();
					func_27();
					func_5();
					func_4();
				}
				else if (func_1(0))
				{
					func_83(1);
				}
				break;
		}
		SYSTEM::WAIT(0);
	}
}

int func_1(bool bParam0)//Position - 0x1C6
{
	if (bParam0)
	{
		if (func_3())
		{
			return 1;
		}
	}
	if (func_2(14))
	{
		return 1;
	}
	return 0;
}

bool func_2(int iParam0)//Position - 0x1EC
{
	return Global_8C41 == iParam0;
}

int func_3()//Position - 0x1FA
{
	if (Global_196E5)
	{
		return 1;
	}
	if (!func_2(14) && unk_0xB731B8C5BCE89836(joaat("director_mode")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_4()//Position - 0x22C
{
	int iVar0;
	bool bVar1;
	
	bVar1 = false;
	if (iLocal_51 == 1)
	{
		if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 1766.972f, 2409.596f, 43.55469f, 1826.647f, 2471.633f, 56.30863f, 12f, 0, true, 0))
			{
				if (!bLocal_55)
				{
					unk_0x5C083DB6ACC5827F("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x5C083DB6ACC5827F("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_59[0] = 1;
				}
			}
			else
			{
				iLocal_59[0] = 0;
			}
		}
	}
	else if (iLocal_51 == 2)
	{
		if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 1662.31f, 2391.06f, 43.51377f, 1761.362f, 2405.143f, 56.65472f, 12f, 0, true, 0))
			{
				if (!bLocal_55)
				{
					unk_0x5C083DB6ACC5827F("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x5C083DB6ACC5827F("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_59[1] = 1;
				}
			}
			else
			{
				iLocal_59[1] = 0;
			}
		}
	}
	else if (iLocal_51 == 3)
	{
		if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 1537.369f, 2465.132f, 43.5756f, 1655.663f, 2391.822f, 56.54404f, 12f, 0, true, 0))
			{
				if (!bLocal_55)
				{
					unk_0x5C083DB6ACC5827F("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x5C083DB6ACC5827F("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_59[2] = 1;
				}
			}
			else
			{
				iLocal_59[2] = 0;
			}
		}
	}
	else if (iLocal_51 == 4)
	{
		if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 1529.153f, 2584.264f, 43.6168f, 1535.014f, 2469.253f, 56.5985f, 12f, 0, true, 0))
			{
				if (!bLocal_55)
				{
					unk_0x5C083DB6ACC5827F("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x5C083DB6ACC5827F("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_59[3] = 1;
				}
			}
			else
			{
				iLocal_59[3] = 0;
			}
		}
	}
	else if (iLocal_51 == 5)
	{
		if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 1565.045f, 2681.205f, 43.50552f, 1529.915f, 2586.427f, 56.52686f, 12f, 0, true, 0))
			{
				if (!bLocal_55)
				{
					unk_0x5C083DB6ACC5827F("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x5C083DB6ACC5827F("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_59[4] = 1;
				}
			}
			else
			{
				iLocal_59[4] = 0;
			}
		}
	}
	else if (iLocal_51 == 6)
	{
		if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 1645.169f, 2760.33f, 43.6705f, 1567.113f, 2682.905f, 56.39177f, 12f, 0, true, 0))
			{
				if (!bLocal_55)
				{
					unk_0x5C083DB6ACC5827F("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x5C083DB6ACC5827F("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_59[5] = 1;
				}
			}
			else
			{
				iLocal_59[5] = 0;
			}
		}
	}
	else if (iLocal_51 == 7)
	{
		if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 1772.306f, 2766.364f, 43.59126f, 1650.228f, 2761.691f, 56.53028f, 12f, 0, true, 0))
			{
				if (!bLocal_55)
				{
					unk_0x5C083DB6ACC5827F("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x5C083DB6ACC5827F("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_59[6] = 1;
				}
			}
			else
			{
				iLocal_59[6] = 0;
			}
		}
	}
	else if (iLocal_51 == 8)
	{
		if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 1831.435f, 2623.257f, 43.46658f, 1851.659f, 2696.404f, 56.68093f, 12f, 0, true, 0))
			{
				if (!bLocal_55)
				{
					unk_0x5C083DB6ACC5827F("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x5C083DB6ACC5827F("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_59[7] = 1;
				}
			}
			else
			{
				iLocal_59[7] = 0;
			}
		}
	}
	else if (iLocal_51 == 9)
	{
		if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 1831.435f, 2623.257f, 43.46658f, 1851.659f, 2696.404f, 56.68093f, 12f, 0, true, 0))
			{
				if (!bLocal_55)
				{
					unk_0x5C083DB6ACC5827F("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x5C083DB6ACC5827F("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_59[8] = 1;
				}
			}
			else
			{
				iLocal_59[8] = 0;
			}
		}
	}
	else if (iLocal_51 == 10)
	{
		if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 1829.468f, 2480.96f, 43.52237f, 1836.998f, 2566.856f, 60.35412f, 20.5f, 0, true, 0))
			{
				if (!bLocal_55)
				{
					unk_0x5C083DB6ACC5827F("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x5C083DB6ACC5827F("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_59[9] = 1;
				}
			}
			else
			{
				iLocal_59[9] = 0;
			}
		}
	}
	iLocal_51++;
	if (iLocal_51 > 10)
	{
		iLocal_51 = 0;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (iLocal_59[iVar0])
			{
				bVar1 = true;
			}
			iVar0++;
		}
		if (!bVar1)
		{
			if (!bLocal_55)
			{
				unk_0x5C083DB6ACC5827F("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 0, 1);
				unk_0x5C083DB6ACC5827F("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 1, 1);
			}
		}
	}
}

void func_5()//Position - 0x6CC
{
	vector3 vVar0;
	
	switch (iLocal_50)
	{
		case 0:
			unk_0xF243B7A14FCFD0F4(joaat("police3"));
			unk_0xF243B7A14FCFD0F4(joaat("s_m_y_cop_01"));
			if (unk_0xD6513D668481290A(joaat("police3")) && unk_0xD6513D668481290A(joaat("s_m_y_cop_01")))
			{
				iLocal_50++;
			}
			break;
		
		case 1:
			iLocal_66 = unk_0x61C05BF08A1E0EFE(joaat("police3"), 1797.785f, 2599.697f, 44.5769f, 269.6189f, true, true, false);
			iLocal_68 = unk_0xFD8987C090669BD5(iLocal_66, 6, joaat("s_m_y_cop_01"), -1, 1, true);
			func_26(&iLocal_68);
			iLocal_50++;
			break;
		
		case 2:
			if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
			{
				vVar0 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) };
			}
			if ((func_16(iLocal_68, iLocal_66, &Local_70, &uLocal_71, 0, 1, 0, 1, 1) || func_16(iLocal_69, iLocal_67, &Local_70, &uLocal_71, 0, 1, 0, 1, 1)) || (func_15(vVar0, 4, 20, 0) && !unk_0x62083F80FA40AAD2(unk_0xBC25C936A095B5BA())))
			{
				unk_0x18EA2F325EEF2817(joaat("prop_gate_prison_01"), 1845f, 2605f, 45f, 0, 0f, 50f, 0f);
				unk_0x18EA2F325EEF2817(joaat("prop_gate_prison_01"), 1819.274f, 2608.537f, 44.6195f, 0, 0f, 50f, 0f);
				if (!unk_0x1D403DFADBC2DE3C(iLocal_68, 0))
				{
					unk_0xB8CBD998685C0685(iLocal_68, unk_0xBC25C936A095B5BA(), 0, 16);
				}
				if (!func_14(&iLocal_72))
				{
					func_11(&iLocal_72);
				}
				iLocal_50++;
			}
			break;
		
		case 3:
			if (func_14(&iLocal_72))
			{
				if (func_8(&iLocal_72) > 15f)
				{
					iLocal_67 = unk_0x61C05BF08A1E0EFE(joaat("police3"), 1755.159f, 2614.456f, 44.5652f, 179.3394f, true, true, false);
					iLocal_69 = unk_0xFD8987C090669BD5(iLocal_67, 6, joaat("s_m_y_cop_01"), -1, 1, true);
					func_26(&iLocal_69);
					unk_0xB8CBD998685C0685(iLocal_69, unk_0xBC25C936A095B5BA(), 0, 16);
					iLocal_50++;
				}
				else if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 0)
				{
					if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
					{
						vVar0 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) };
					}
					if (func_7(1818.237f, 2604.927f, 44.57381f, vVar0, 1125515264))
					{
						func_6();
						iLocal_50 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 0)
			{
				if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
				{
					vVar0 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) };
				}
				if (func_7(1818.237f, 2604.927f, 44.57381f, vVar0, 1125515264))
				{
					func_6();
					iLocal_50 = 0;
				}
			}
			break;
	}
}

void func_6()//Position - 0x94E
{
	if (unk_0x724D816EA203A79E(iLocal_66))
	{
		unk_0xCF6040807CC0E4A5(&iLocal_66);
	}
	if (unk_0x724D816EA203A79E(iLocal_68))
	{
		unk_0xF845620A03C7425B(&iLocal_68);
	}
	if (unk_0x724D816EA203A79E(iLocal_67))
	{
		unk_0xCF6040807CC0E4A5(&iLocal_67);
	}
	if (unk_0x724D816EA203A79E(iLocal_69))
	{
		unk_0xF845620A03C7425B(&iLocal_69);
	}
}

int func_7(vector3 vParam0, vector3 vParam1, float fParam2)//Position - 0x992
{
	if (SYSTEM::VDIST2(vParam0, vParam1) < (fParam2 * fParam2))
	{
		if (((unk_0x724D816EA203A79E(iLocal_66) && unk_0x724D816EA203A79E(iLocal_68)) && unk_0x724D816EA203A79E(iLocal_67)) && unk_0x724D816EA203A79E(iLocal_69))
		{
			if (unk_0x41A5D6415E2CC10E(iLocal_66) || !unk_0xD1DC4B08247A4317(iLocal_66))
			{
				if (unk_0x41A5D6415E2CC10E(iLocal_68) || !unk_0xD1DC4B08247A4317(iLocal_68))
				{
					if (unk_0x41A5D6415E2CC10E(iLocal_67) || !unk_0xD1DC4B08247A4317(iLocal_67))
					{
						if (unk_0x41A5D6415E2CC10E(iLocal_69) || !unk_0xD1DC4B08247A4317(iLocal_69))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	else if (SYSTEM::VDIST2(vParam0, vParam1) > 62500f)
	{
		return 1;
	}
	return 0;
}

float func_8(int iParam0)//Position - 0xA52
{
	if (func_14(iParam0))
	{
		if (func_10(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_9(unk_0xFA30DFD0084E92FE(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_9(bool bParam0)//Position - 0xA91
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(unk_0x105601648511CC64());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x7AF0088ABFA713B6())
	{
		iVar2 = unk_0xED678C85A82F0AB9();
		fVar3 = SYSTEM::TO_FLOAT(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(unk_0x105601648511CC64()) / 1000f);
}

bool func_10(int iParam0)//Position - 0xAE9
{
	return unk_0xFA30DFD0084E92FE(*iParam0, 2);
}

void func_11(int iParam0)//Position - 0xAF9
{
	if (!func_14(iParam0))
	{
		func_12(iParam0);
	}
}

void func_12(int iParam0)//Position - 0xB11
{
	func_13(iParam0, 0f);
}

void func_13(int iParam0, float fParam1)//Position - 0xB20
{
	iParam0->f_1 = (func_9(unk_0xFA30DFD0084E92FE(*iParam0, 4)) - fParam1);
	unk_0xF0059F27F7BB6680(iParam0, 1);
	unk_0x7CB6FD92BE491AD9(iParam0, 2);
	iParam0->f_2 = 0f;
}

bool func_14(int iParam0)//Position - 0xB4E
{
	return unk_0xFA30DFD0084E92FE(*iParam0, 1);
}

int func_15(vector3 vParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xB5E
{
	vector3 vVar0[15];
	vector3 vVar1[15];
	float fVar2[15];
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar5 = 0;
	switch (iParam1)
	{
		case 1:
			vVar0[0 /*3*/] = { -1332.211f, 100.4608f, 40.38437f };
			vVar1[0 /*3*/] = { -1094.238f, 148.4274f, 73f };
			fVar2[0] = 171.25f;
			vVar0[1 /*3*/] = { -999.7344f, -110.2231f, 25.25706f };
			vVar1[1 /*3*/] = { -1149.494f, 109.2558f, 73f };
			fVar2[1] = 132f;
			vVar0[2 /*3*/] = { -1035.113f, -84.95885f, 28.2746f };
			vVar1[2 /*3*/] = { -1261.103f, 50.08148f, 73f };
			fVar2[2] = 132f;
			iVar3 = 3;
			break;
		
		case 2:
			vVar0[0 /*3*/] = { -804.3439f, -3346.5f, 10f };
			vVar1[0 /*3*/] = { -1816.954f, -2768.893f, IntToFloat((250 + iParam2)) };
			fVar2[0] = 247f;
			vVar0[1 /*3*/] = { -1911.488f, -2934.197f, 10f };
			vVar1[1 /*3*/] = { -968.6236f, -3477.748f, IntToFloat((250 + iParam2)) };
			fVar2[1] = 149f;
			vVar0[2 /*3*/] = { -844.9433f, -2802.785f, 10f };
			vVar1[2 /*3*/] = { -1011.081f, -3086.904f, IntToFloat((250 + iParam2)) };
			fVar2[2] = 185.5f;
			vVar0[3 /*3*/] = { -1021.086f, -2952.277f, 10f };
			vVar1[3 /*3*/] = { -1599.008f, -2616.271f, IntToFloat((250 + iParam2)) };
			fVar2[3] = 250f;
			vVar0[4 /*3*/] = { -1027.136f, -2436.457f, 10f };
			vVar1[4 /*3*/] = { -1392.61f, -2226.763f, IntToFloat((250 + iParam2)) };
			fVar2[4] = 193.5f;
			vVar0[5 /*3*/] = { -1497.549f, -2408.712f, 10f };
			vVar1[5 /*3*/] = { -1136.917f, -2617.955f, IntToFloat((250 + iParam2)) };
			fVar2[5] = 234.5f;
			vVar0[6 /*3*/] = { -982.7924f, -2831.709f, 12.93313f };
			vVar1[6 /*3*/] = { -966.4677f, -2803.458f, 16.68313f };
			fVar2[6] = 16f;
			vVar0[7 /*3*/] = { -1110.083f, -3496.806f, 12f };
			vVar1[7 /*3*/] = { -1955.298f, -3010.431f, IntToFloat((250 + iParam2)) };
			fVar2[7] = 80f;
			vVar0[8 /*3*/] = { -1886.899f, -3193.024f, 12f };
			vVar1[8 /*3*/] = { -1836.143f, -3105.268f, IntToFloat((250 + iParam2)) };
			fVar2[8] = 142f;
			vVar0[9 /*3*/] = { -1134.337f, -3535.648f, 12f };
			vVar1[9 /*3*/] = { -1259.649f, -3463.486f, IntToFloat((250 + iParam2)) };
			fVar2[9] = 30.75f;
			vVar0[10 /*3*/] = { -969.1279f, -3463.899f, 12f };
			vVar1[10 /*3*/] = { -896.3734f, -3505.715f, IntToFloat((250 + iParam2)) };
			fVar2[10] = 150f;
			vVar0[11 /*3*/] = { -1369.491f, -2173.579f, 10f };
			vVar1[11 /*3*/] = { -1685.626f, -2720.364f, IntToFloat((250 + iParam2)) };
			fVar2[11] = 29.25f;
			vVar0[12 /*3*/] = { -1010.926f, -3550.943f, 10f };
			vVar1[12 /*3*/] = { -1110.198f, -3493.617f, IntToFloat((250 + iParam2)) };
			fVar2[12] = 43f;
			iVar3 = 13;
			break;
		
		case 3:
			vVar0[0 /*3*/] = { -1773.944f, 3287.334f, 30f };
			vVar1[0 /*3*/] = { -2029.776f, 2845.083f, IntToFloat((250 + iParam2)) };
			fVar2[0] = 255f;
			vVar0[1 /*3*/] = { -2725.889f, 3291.099f, 30f };
			vVar1[1 /*3*/] = { -2009.182f, 2879.835f, IntToFloat((250 + iParam2)) };
			fVar2[1] = 180f;
			vVar0[2 /*3*/] = { -2442.026f, 3326.699f, 30f };
			vVar1[2 /*3*/] = { -2033.928f, 3089.049f, IntToFloat((250 + iParam2)) };
			fVar2[2] = 205f;
			vVar0[3 /*3*/] = { -1917.165f, 3374.209f, 30f };
			vVar1[3 /*3*/] = { -2016.791f, 3195.058f, IntToFloat((250 + iParam2)) };
			fVar2[3] = 86.25f;
			vVar0[4 /*3*/] = { -2192.753f, 3373.278f, 30f };
			vVar1[4 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam2)) };
			fVar2[4] = 150.5f;
			vVar0[5 /*3*/] = { -2077.663f, 3344.514f, 30f };
			vVar1[5 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam2)) };
			fVar2[5] = 140.5f;
			vVar0[6 /*3*/] = { -2861.755f, 3352.661f, 30f };
			vVar1[6 /*3*/] = { -2715.871f, 3269.916f, IntToFloat((250 + iParam2)) };
			fVar2[6] = 90f;
			vVar0[7 /*3*/] = { -2005.574f, 3364.533f, 30f };
			vVar1[7 /*3*/] = { -1977.569f, 3330.888f, IntToFloat((250 + iParam2)) };
			fVar2[7] = 100f;
			vVar0[8 /*3*/] = { -1682.235f, 3004.285f, 30f };
			vVar1[8 /*3*/] = { -1942.747f, 2947.441f, IntToFloat((250 + iParam2)) };
			fVar2[8] = 248.75f;
			vVar0[9 /*3*/] = { -2393.295f, 2936.406f, 31.6801f };
			vVar1[9 /*3*/] = { -2453.037f, 3006.863f, 52.31003f };
			fVar2[9] = 128f;
			vVar0[10 /*3*/] = { -2347.185f, 3023.83f, 31.56573f };
			vVar1[10 /*3*/] = { -2517.33f, 2989.063f, 49.95644f };
			fVar2[10] = 127.25f;
			vVar0[11 /*3*/] = { -2259.922f, 3358.04f, 29.99972f };
			vVar1[11 /*3*/] = { -2299.772f, 3385.79f, 38.06014f };
			fVar2[11] = 16f;
			vVar0[12 /*3*/] = { -2476.309f, 3363.914f, 31.67933f };
			vVar1[12 /*3*/] = { -2431.981f, 3287.669f, 39.97826f };
			fVar2[12] = 214.25f;
			vVar0[13 /*3*/] = { -2103.081f, 2797.783f, 29.37864f };
			vVar1[13 /*3*/] = { -2096.821f, 2874.423f, 57.80989f };
			fVar2[13] = 65.75f;
			if (bParam3)
			{
				iVar6 = iParam2;
			}
			else
			{
				iVar6 = 0;
			}
			vVar1[9 /*3*/].f_2 = (vVar1[9 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[10 /*3*/].f_2 = (vVar1[10 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[11 /*3*/].f_2 = (vVar1[11 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[12 /*3*/].f_2 = (vVar1[12 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[13 /*3*/].f_2 = (vVar1[13 /*3*/].f_2 + IntToFloat(iVar6));
			iVar3 = 14;
			break;
		
		case 4:
			vVar0[0 /*3*/] = { 1541.607f, 2527.555f, 40f };
			vVar1[0 /*3*/] = { 1815.575f, 2535.06f, IntToFloat((150 + iParam2)) };
			fVar2[0] = 114f;
			vVar0[1 /*3*/] = { 1788.879f, 2445.727f, 40f };
			vVar1[1 /*3*/] = { 1716.96f, 2502.957f, IntToFloat((150 + iParam2)) };
			fVar2[1] = 88.5f;
			vVar0[2 /*3*/] = { 1601.157f, 2436.244f, 40f };
			vVar1[2 /*3*/] = { 1650.078f, 2515.923f, IntToFloat((150 + iParam2)) };
			fVar2[2] = 133.25f;
			vVar0[3 /*3*/] = { 1706.331f, 2407.597f, 40f };
			vVar1[3 /*3*/] = { 1698.555f, 2460.208f, IntToFloat((150 + iParam2)) };
			fVar2[3] = 104.5f;
			vVar0[4 /*3*/] = { 1712.452f, 2756.218f, 40f };
			vVar1[4 /*3*/] = { 1718.848f, 2589.162f, IntToFloat((150 + iParam2)) };
			fVar2[4] = 121.75f;
			vVar0[5 /*3*/] = { 1830.228f, 2661.24f, 40f };
			vVar1[5 /*3*/] = { 1774.812f, 2679.419f, IntToFloat((150 + iParam2)) };
			fVar2[5] = 84.5f;
			vVar0[6 /*3*/] = { 1559.05f, 2632.22f, 40f };
			vVar1[6 /*3*/] = { 1657.208f, 2595.484f, IntToFloat((150 + iParam2)) };
			fVar2[6] = 103.75f;
			vVar0[7 /*3*/] = { 1612.021f, 2716.869f, 40f };
			vVar1[7 /*3*/] = { 1657.165f, 2669.721f, IntToFloat((150 + iParam2)) };
			fVar2[7] = 104.25f;
			vVar0[8 /*3*/] = { 1809.872f, 2729.827f, 40f };
			vVar1[8 /*3*/] = { 1789.855f, 2705.037f, IntToFloat((150 + iParam2)) };
			fVar2[8] = 91f;
			vVar0[9 /*3*/] = { 1818.789f, 2605.948f, 40f };
			vVar1[9 /*3*/] = { 1783.114f, 2606.783f, IntToFloat((150 + iParam2)) };
			fVar2[9] = 51.25f;
			iVar3 = 10;
			break;
		
		case 5:
			vVar0[0 /*3*/] = { 3411.002f, 3663.185f, 20f };
			vVar1[0 /*3*/] = { 3615.583f, 3626.194f, IntToFloat((40 + iParam2)) };
			fVar2[0] = 45.75f;
			vVar0[1 /*3*/] = { 3426.66f, 3733.078f, 20f };
			vVar1[1 /*3*/] = { 3643.801f, 3694.362f, IntToFloat((40 + iParam2)) };
			fVar2[1] = 99f;
			vVar0[2 /*3*/] = { 3446.036f, 3795.688f, 20f };
			vVar1[2 /*3*/] = { 3650.914f, 3766.152f, IntToFloat((40 + iParam2)) };
			fVar2[2] = 81.5f;
			iVar3 = 3;
			break;
		
		case 6:
			vVar0[0 /*3*/] = { 526.053f, -3391.497f, -10f };
			vVar1[0 /*3*/] = { 523.2289f, -3118.678f, IntToFloat((10 + iParam2)) };
			fVar2[0] = 120f;
			vVar0[1 /*3*/] = { 459.4397f, -3199.99f, 4.819676f };
			vVar1[1 /*3*/] = { 593.8928f, -3199.998f, 30.06926f };
			fVar2[1] = 170f;
			vVar0[2 /*3*/] = { 552.8467f, -3111.054f, 4.819394f };
			vVar1[2 /*3*/] = { 585.3137f, -3111.844f, 17.56923f };
			fVar2[2] = 12.5f;
			vVar0[3 /*3*/] = { 598.4666f, -3140.147f, 4.819257f };
			vVar1[3 /*3*/] = { 597.4973f, -3117.063f, 17.31926f };
			fVar2[3] = 9.75f;
			iVar3 = 4;
			break;
		
		case 7:
			vVar0[0 /*3*/] = { -1108.55f, -570.8798f, 20f };
			vVar1[0 /*3*/] = { -1187.811f, -477.5037f, IntToFloat((50 + iParam2)) };
			fVar2[0] = 162f;
			vVar0[1 /*3*/] = { -1201.378f, -485.9673f, 20f };
			vVar1[1 /*3*/] = { -1215.796f, -464.8281f, IntToFloat((50 + iParam2)) };
			fVar2[1] = 124f;
			vVar0[2 /*3*/] = { -985.6311f, -525.4233f, 20f };
			vVar1[2 /*3*/] = { -1013.393f, -475.2057f, IntToFloat((50 + iParam2)) };
			fVar2[2] = 55f;
			vVar0[3 /*3*/] = { -1055.849f, -477.8226f, 20f };
			vVar1[3 /*3*/] = { -1073.333f, -498.717f, IntToFloat((50 + iParam2)) };
			fVar2[3] = 142f;
			iVar3 = 4;
			break;
		
		case 8:
			vVar0[0 /*3*/] = { 461.5684f, -984.572f, 29.43951f };
			vVar1[0 /*3*/] = { 471.17f, -984.4292f, 40.14212f };
			fVar2[0] = 7.75f;
			vVar0[1 /*3*/] = { 457.3404f, -984.756f, 34.43951f };
			vVar1[1 /*3*/] = { 457.2084f, -993.7189f, 29.38958f };
			fVar2[1] = 14.75f;
			vVar0[2 /*3*/] = { 477.6227f, -986.6f, 40.00819f };
			vVar1[2 /*3*/] = { 424.8687f, -986.3279f, 48.71241f };
			fVar2[2] = 31.5f;
			vVar0[3 /*3*/] = { 474.3889f, -974.4613f, 39.55761f };
			vVar1[3 /*3*/] = { 474.0358f, -1021.972f, 49.10033f };
			fVar2[3] = 30.5f;
			vVar0[4 /*3*/] = { 442.1768f, -974.1888f, 29.68951f };
			vVar1[4 /*3*/] = { 442.1855f, -979.8635f, 33.43951f };
			fVar2[4] = 6.75f;
			iVar3 = 5;
			break;
	}
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		if (unk_0x7352105EC4D7541F(vParam0, vVar0[iVar4 /*3*/], vVar1[iVar4 /*3*/], fVar2[iVar4], iVar5, true))
		{
			return 1;
		}
		iVar4++;
	}
	return 0;
}

int func_16(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x18B2
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0xBC25C936A095B5BA();
	if (!unk_0x1D403DFADBC2DE3C(iVar0, 0) && !unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		if (!func_25(*uParam2, 1))
		{
			if (func_24(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_25(*uParam2, 2))
		{
			if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_25(*uParam2, 4))
		{
			if (func_22(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_25(*uParam2, 8))
		{
			if (func_21(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_25(*uParam2, 128);
		if (bParam4)
		{
			if (func_17(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_25(*uParam2, 16))
		{
			if (func_17(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
			{
				*uParam3 = 16;
				return 1;
			}
		}
	}
	else if (unk_0x724D816EA203A79E(iParam0))
	{
		if (iParam7 && unk_0xD9C1758D86688CEA(iParam0, iVar0, 1))
		{
			*uParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_17(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x19DC
{
	int iVar0;
	int iVar1;
	
	if (bParam3)
	{
		if (!bLocal_45)
		{
			iLocal_46 = unk_0x8D66276473ABD7CC(iParam0);
			bLocal_45 = true;
		}
		iLocal_47 = unk_0x8D66276473ABD7CC(iParam0);
		iLocal_48 = (iLocal_46 - iLocal_47);
		iVar0 = unk_0x3E12B546F3F2597A();
		if (!unk_0x1D403DFADBC2DE3C(iVar0, 0))
		{
			if (unk_0xD9C1758D86688CEA(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_48) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_45)
		{
			if (unk_0xD9C1758D86688CEA(iParam0, unk_0xBC25C936A095B5BA(), 1))
			{
				if (IntToFloat(iLocal_48) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xD9C1758D86688CEA(iParam0, unk_0xBC25C936A095B5BA(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		iVar1 = unk_0x3E12B546F3F2597A();
		if (!unk_0x1D403DFADBC2DE3C(iVar1, 0))
		{
			if (unk_0xD9C1758D86688CEA(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
		{
			if (unk_0xA4813477CC5DD00F(iParam0))
			{
				if (unk_0x33213E99DDEE4631(iParam0) == unk_0xBC25C936A095B5BA())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0xABB2AFD7539464EA(unk_0xBC25C936A095B5BA()))
		{
			if (unk_0x4DBCE270B354E123(iParam0, unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), 10f, 10f, 10f, false, true, 0))
			{
				if (unk_0x231DB1D0F4218A1B(unk_0xB5CEFD608600A09F()))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0xADA34C38F1319208(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0xD1071273B19F81DF(iParam0))
		{
			return 1;
		}
	}
	if (func_20(unk_0xBC25C936A095B5BA(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x2CDE18D6C89522AD(iParam0) && func_18(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (unk_0x5237AF95232D78C5(iParam0, 0))
		{
			if (unk_0xE921F8171F0733B3(unk_0xBC25C936A095B5BA(), unk_0x9FE9D386222EEE47(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (unk_0xE921F8171F0733B3(unk_0xBC25C936A095B5BA(), iParam0))
		{
			return 1;
		}
		if (!unk_0x1D403DFADBC2DE3C(iParam1, 0))
		{
			if (unk_0xD9C1758D86688CEA(iParam1, unk_0xBC25C936A095B5BA(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_18(int iParam0, bool bParam1)//Position - 0x1BA4
{
	return func_19(unk_0xA95CF30C72EB526E(unk_0xFC1CAE18F3ECBF2D()), iParam0, bParam1);
}

float func_19(int iParam0, int iParam1, bool bParam2)//Position - 0x1BBC
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		vVar0 = { unk_0x541C2AEF053615BC(iParam0, true) };
	}
	else
	{
		vVar0 = { unk_0x541C2AEF053615BC(iParam0, false) };
	}
	if (!unk_0x1D403DFADBC2DE3C(iParam1, 0))
	{
		vVar1 = { unk_0x541C2AEF053615BC(iParam1, true) };
	}
	else
	{
		vVar1 = { unk_0x541C2AEF053615BC(iParam1, false) };
	}
	return unk_0xF0F2FC9DE291567F(vVar0, vVar1, bParam2);
}

int func_20(int iParam0, int iParam1)//Position - 0x1C1A
{
	int iVar0;
	
	unk_0x9CDD10270A1ACF6F(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (unk_0x32E373675659FDB0(iParam0))
		{
			if (SYSTEM::VDIST(unk_0x541C2AEF053615BC(iParam0, true), unk_0x541C2AEF053615BC(iParam1, true)) < 2.5f)
			{
				if (unk_0xC5B8A5F778E321DD(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_21(int iParam0, int iParam1, var uParam2)//Position - 0x1C6F
{
	if (unk_0x72C9157015C2151B(iParam0, 4))
	{
		if (unk_0x32E373675659FDB0(iParam0) && !unk_0x75F706B6889D7D86(iParam0))
		{
			if (unk_0x4DBCE270B354E123(iParam1, unk_0x541C2AEF053615BC(iParam0, true), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), false, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_22(int iParam0, int iParam1, var uParam2, bool bParam3)//Position - 0x1CBD
{
	vector3 vVar0;
	int iVar1;
	
	iVar1 = 0;
	if (!unk_0x1D403DFADBC2DE3C(iParam1, 0))
	{
		vVar0 = { unk_0x541C2AEF053615BC(iParam1, true) };
	}
	if (unk_0x04880508C862E589(vVar0, 4f, 1))
	{
		return 1;
	}
	if (unk_0xB7CB92A84A7518CD(vVar0, SYSTEM::TO_FLOAT(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (unk_0x72C9157015C2151B(iParam0, 2))
	{
		if (unk_0x32E373675659FDB0(iParam0))
		{
			if (unk_0x4DBCE270B354E123(iParam1, unk_0x541C2AEF053615BC(iParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
			{
				if (unk_0xC5B8A5F778E321DD(unk_0x399F7937FFE4DEBF(iParam1), iParam0, 120f) && unk_0x4833C1F1F1364989(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (unk_0x5237AF95232D78C5(unk_0x399F7937FFE4DEBF(iParam1), 0))
			{
				iVar1 = unk_0x9FE9D386222EEE47(unk_0x399F7937FFE4DEBF(iParam1), 0);
			}
			if (unk_0x042228744678C7D4(iParam0) || func_23(iVar1))
			{
				if (unk_0x4DBCE270B354E123(iParam1, unk_0x541C2AEF053615BC(iParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
				{
					if (unk_0xC5B8A5F778E321DD(unk_0x399F7937FFE4DEBF(iParam1), iParam0, 120f) && unk_0x4833C1F1F1364989(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0x876474582C5DECDE((vVar0.x - IntToFloat(uParam2->f_6)), (vVar0.y - IntToFloat(uParam2->f_6)), (vVar0.z - IntToFloat(uParam2->f_6)), (vVar0.x + IntToFloat(uParam2->f_6)), (vVar0.y + IntToFloat(uParam2->f_6)), (vVar0.z + IntToFloat(uParam2->f_6)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_23(int iParam0)//Position - 0x1E36
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		if (unk_0xE59B7F5A03335350(iParam0, 0))
		{
			if (unk_0x3187EF5798B5D209(iParam0, -1, 0) != 0)
			{
				if (unk_0x9CDD10270A1ACF6F(unk_0xBC25C936A095B5BA(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_19(unk_0xBC25C936A095B5BA(), iParam0, 1) < 40f)
						{
							if (unk_0x1CD240A97A49C198(unk_0xB5CEFD608600A09F(), &iVar1))
							{
								if ((unk_0xD27AC0E9B78CFDD7(iVar1) && unk_0x233ED4CD1F1A42C1(iVar1) == iParam0) || (unk_0x386592AF38881675(iVar1) && unk_0x399F7937FFE4DEBF(iVar1) == unk_0x3187EF5798B5D209(iParam0, -1, 0)))
								{
									if ((unk_0x7214F4879DF8A314(unk_0xBC25C936A095B5BA()) && unk_0x8FCEEB789599BD9B(0, 24)) || (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) && unk_0x8FCEEB789599BD9B(0, 69)))
									{
										return 1;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_24(int iParam0, var uParam1)//Position - 0x1F04
{
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		if (unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 6))
		{
			if (unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), iParam0) || unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), iParam0))
			{
				if (unk_0xC5B8A5F778E321DD(iParam0, unk_0xBC25C936A095B5BA(), 90f))
				{
					if (func_18(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = unk_0x105601648511CC64();
						}
						else if ((unk_0x105601648511CC64() - uParam1->f_1) > uParam1->f_3)
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

bool func_25(var uParam0, int iParam1)//Position - 0x1F89
{
	return (uParam0 && iParam1) != 0;
}

void func_26(int iParam0)//Position - 0x1F98
{
	unk_0x7A535CE1F001F3FE(*iParam0, joaat("weapon_assaultshotgun"), -1, false, true);
	unk_0x2E35C4FA5F0ED22F(*iParam0, true);
	unk_0x91629AC1E1F78419(*iParam0, 13, true);
	unk_0x91629AC1E1F78419(*iParam0, 0, true);
	unk_0xEB061E1EBFED4D59(*iParam0, 1);
	unk_0x54480313BB3E8DD0(*iParam0, 1);
	unk_0x4538D2D018750307(*iParam0, 0f);
	unk_0x22321800954A532E(*iParam0, true);
	unk_0xFC3C88E2313FA926(*iParam0, 100);
	unk_0x80F51E5792576467(*iParam0, 2);
	unk_0x91629AC1E1F78419(*iParam0, 23, false);
	unk_0x6CCBC1B22488DC0C(*iParam0, 1000f);
	unk_0x91629AC1E1F78419(*iParam0, 1, true);
}

void func_27()//Position - 0x201A
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (bLocal_294)
	{
		if (!unk_0x1D403DFADBC2DE3C(iLocal_289, 0))
		{
			if (!unk_0xB34E411B0A4BF096(iLocal_289))
			{
				unk_0x9E6D037EC3389728(iLocal_289, 101, "PrisonHeli", 1);
			}
			if (!unk_0x1D403DFADBC2DE3C(iLocal_290, 0))
			{
				vVar0 = { unk_0xA4455714F3DCE207(iLocal_290, 0f, 4f, -2f) };
				unk_0xF1B504353F150C28(iLocal_290, vVar0);
			}
			if (bLocal_292)
			{
				if (!func_28())
				{
					bLocal_292 = false;
					unk_0x1516BB0BAE20386F(iLocal_289, 0, 0);
				}
			}
			else if (func_28())
			{
				bLocal_292 = true;
				unk_0x1516BB0BAE20386F(iLocal_289, 1, 0);
			}
			if (bLocal_292)
			{
				vVar1 = { unk_0x541C2AEF053615BC(iLocal_289, true) };
				if (SYSTEM::VDIST2(vLocal_248, vVar1) < 90000f)
				{
					if (!iLocal_293)
					{
						iLocal_293 = 1;
					}
				}
			}
		}
		else if (unk_0x2DA8CA50A72528FB(iLocal_291))
		{
			unk_0x07B8ECB35A4ED3AC(&iLocal_291);
		}
	}
}

int func_28()//Position - 0x20ED
{
	if (unk_0x6E06C0DB9B43570D() >= 20 || unk_0x6E06C0DB9B43570D() < 6)
	{
		return 1;
	}
	return 0;
}

void func_29()//Position - 0x2110
{
	int iVar0;
	vector3 vVar1;
	
	if (!Local_307.f_12[0])
	{
		if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			vVar1 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) };
		}
		if (!bLocal_58)
		{
			if (SYSTEM::VDIST2(vVar1, vLocal_305) < 5625f)
			{
				iLocal_306 = 1;
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x36CEFBE9B745A58D(Local_307.f_1B[iVar0]))
		{
			if (!Local_307.f_12[iVar0])
			{
				if (func_16(Local_307.f_1B[iVar0], 0, &Local_70, &uLocal_71, 1, 1, 0, 1, 1) || iLocal_306)
				{
					unk_0xB8CBD998685C0685(Local_307.f_1B[iVar0], unk_0xBC25C936A095B5BA(), 0, 16);
					Local_307.f_12[iVar0] = 1;
				}
			}
			if (!Local_307.f_12[iVar0])
			{
				if (!unk_0x4FB6F74D29923289(Local_307.f_1B[iVar0]))
				{
					unk_0xB0C1A00D86375366(Local_307.f_1B[iVar0], Local_307.f_E[iVar0], 0, 0, -1);
				}
			}
		}
		else if (unk_0x2DA8CA50A72528FB(Local_307.f_24[iVar0]))
		{
			unk_0x07B8ECB35A4ED3AC(&(Local_307.f_24[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x724D816EA203A79E(Local_307.f_1F[iVar0]))
		{
			if (unk_0x36CEFBE9B745A58D(Local_307.f_1F[iVar0]))
			{
				if (unk_0x2DA8CA50A72528FB(Local_307.f_28[iVar0]))
				{
					unk_0x07B8ECB35A4ED3AC(&(Local_307.f_28[iVar0]));
				}
			}
		}
		iVar0++;
	}
	if (!Local_307.f_16[0])
	{
		if (!unk_0x36CEFBE9B745A58D(Local_307.f_1F[0]))
		{
			if ((func_16(Local_307.f_1F[0], 0, &Local_70, &uLocal_71, 1, 1, 0, 1, 1) || Local_307.f_12[1] == 1) || iLocal_306)
			{
				unk_0xA4E856A8CD53B8DF(Local_307.f_1F[0]);
				unk_0xB8CBD998685C0685(Local_307.f_1F[0], unk_0xBC25C936A095B5BA(), 0, 16);
				Local_307.f_16[0] = 1;
			}
		}
	}
	if (!Local_307.f_16[1])
	{
		if (!unk_0x36CEFBE9B745A58D(Local_307.f_1F[1]))
		{
			if ((func_16(Local_307.f_1F[1], 0, &Local_70, &uLocal_71, 0, 1, 0, 1, 1) || Local_307.f_12[1] == 1) || iLocal_306)
			{
				unk_0xA4E856A8CD53B8DF(Local_307.f_1F[1]);
				unk_0xB8CBD998685C0685(Local_307.f_1F[1], unk_0xBC25C936A095B5BA(), 0, 16);
				Local_307.f_16[1] = 1;
			}
		}
	}
	if (!Local_307.f_16[2])
	{
		if (!unk_0x36CEFBE9B745A58D(Local_307.f_1F[2]))
		{
			if ((func_16(Local_307.f_1F[2], 0, &Local_70, &uLocal_71, 0, 1, 0, 1, 1) || Local_307.f_12[2] == 1) || iLocal_306)
			{
				unk_0xA4E856A8CD53B8DF(Local_307.f_1F[2]);
				unk_0xB8CBD998685C0685(Local_307.f_1F[2], unk_0xBC25C936A095B5BA(), 0, 16);
				Local_307.f_16[2] = 1;
			}
		}
	}
	if (!Local_307.f_16[3])
	{
		if (!unk_0x36CEFBE9B745A58D(Local_307.f_1F[3]))
		{
			if ((func_16(Local_307.f_1F[3], 0, &Local_70, &uLocal_71, 0, 1, 0, 1, 1) || Local_307.f_12[2] == 1) || iLocal_306)
			{
				unk_0xA4E856A8CD53B8DF(Local_307.f_1F[3]);
				unk_0xB8CBD998685C0685(Local_307.f_1F[3], unk_0xBC25C936A095B5BA(), 0, 16);
				Local_307.f_16[3] = 1;
			}
		}
	}
	if (!unk_0x36CEFBE9B745A58D(Local_307.f_1B[1]))
	{
		if (unk_0x4FB6F74D29923289(Local_307.f_1B[1]))
		{
			if (!Local_307.f_16[0])
			{
				if (!unk_0x36CEFBE9B745A58D(Local_307.f_1F[0]))
				{
					unk_0x5B8F74954F713B9E(Local_307.f_1F[0], Local_307.f_1B[1], -2f, 0f, 0f, 1f, -1, 1036831949, 1);
				}
			}
			if (!Local_307.f_16[1])
			{
				if (!unk_0x36CEFBE9B745A58D(Local_307.f_1F[1]))
				{
					unk_0x5B8F74954F713B9E(Local_307.f_1F[1], Local_307.f_1B[1], -1f, 0f, 0f, 1f, -1, 1036831949, 1);
				}
			}
		}
	}
	if (!unk_0x36CEFBE9B745A58D(Local_307.f_1B[2]))
	{
		if (unk_0x4FB6F74D29923289(Local_307.f_1B[2]))
		{
			if (!Local_307.f_16[2])
			{
				if (!unk_0x36CEFBE9B745A58D(Local_307.f_1F[2]))
				{
					unk_0x5B8F74954F713B9E(Local_307.f_1F[2], Local_307.f_1B[2], 1f, 0f, 0f, 1f, -1, 1036831949, 1);
				}
			}
			if (!Local_307.f_16[3])
			{
				if (!unk_0x36CEFBE9B745A58D(Local_307.f_1F[3]))
				{
					unk_0x5B8F74954F713B9E(Local_307.f_1F[3], Local_307.f_1B[2], -1f, 0f, 0f, 1f, -1, 1036831949, 1);
				}
			}
		}
	}
}

void func_30()//Position - 0x257A
{
	int iVar0;
	vector3 vVar1;
	
	iLocal_269++;
	if (iLocal_269 >= 30)
	{
		if (!bLocal_58)
		{
			if (func_15(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), 4, 100, 0))
			{
				iVar0 = 0;
				while (iVar0 < 10)
				{
					if (unk_0x724D816EA203A79E(Local_252.f_40[iVar0]) && !unk_0x36CEFBE9B745A58D(Local_252.f_40[iVar0]))
					{
						if (unk_0xADC5538B9DCA2177(unk_0xBC25C936A095B5BA()) != -1)
						{
							if (unk_0xADC5538B9DCA2177(unk_0xBC25C936A095B5BA()) == 1 || unk_0xADC5538B9DCA2177(unk_0xBC25C936A095B5BA()) == 2)
							{
								unk_0xFC3C88E2313FA926(Local_252.f_40[iVar0], 10);
								iLocal_268 = 1;
							}
						}
						else if (unk_0x62083F80FA40AAD2(unk_0xBC25C936A095B5BA()))
						{
							unk_0xFC3C88E2313FA926(Local_252.f_40[iVar0], 10);
							iLocal_268 = 1;
						}
						else
						{
							unk_0xFC3C88E2313FA926(Local_252.f_40[iVar0], 100);
							iLocal_268 = 1;
						}
					}
					iVar0++;
				}
			}
			else
			{
				iLocal_268 = 0;
			}
		}
		iLocal_269 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x724D816EA203A79E(Local_252.f_40[iVar0]) && !unk_0x36CEFBE9B745A58D(Local_252.f_40[iVar0]))
		{
			if (unk_0x86B385F1E3450315(unk_0xFC1CAE18F3ECBF2D(), 0))
			{
				unk_0xC87F56DCAF19EC70(unk_0xB5CEFD608600A09F());
			}
			if ((((func_16(Local_252.f_40[iVar0], 0, &Local_70, &uLocal_71, 0, 1, 0, 1, 1) || unk_0x04880508C862E589(Local_252[iVar0 /*3*/], 20f, 1)) || unk_0xDF316C8AE65015E0(Local_252[iVar0 /*3*/] - Vector(20f, 20f, 20f), Local_252[iVar0 /*3*/] + Vector(20f, 20f, 20f))) || iLocal_268) || func_32(&(Local_252.f_40[iVar0])))
			{
				if (!func_2(5))
				{
					if (unk_0x62083F80FA40AAD2(unk_0xBC25C936A095B5BA()))
					{
						if (bLocal_61)
						{
							func_31(iVar0);
						}
					}
					else
					{
						func_31(iVar0);
					}
				}
			}
			else if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 0)
			{
				if (!unk_0x4FB6F74D29923289(Local_252.f_40[iVar0]))
				{
					unk_0xB0C1A00D86375366(Local_252.f_40[iVar0], Local_252.f_2A[iVar0], 0, 0, -1);
					Local_252.f_35[iVar0] = 0;
				}
			}
		}
		else if (unk_0x2DA8CA50A72528FB(Local_252.f_4B[iVar0]))
		{
			unk_0x07B8ECB35A4ED3AC(&(Local_252.f_4B[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (((unk_0x724D816EA203A79E(iLocal_264[iVar0]) && !unk_0x1D403DFADBC2DE3C(iLocal_264[iVar0], 0)) && unk_0x724D816EA203A79E(iLocal_263[iVar0])) && !unk_0x1D403DFADBC2DE3C(iLocal_263[iVar0], 0))
		{
			vVar1 = { unk_0xA4455714F3DCE207(iLocal_264[iVar0], 0f, 3.5f, -2f) };
			unk_0xF1B504353F150C28(iLocal_264[iVar0], vVar1);
			unk_0x2D655AA68FA1736B(iLocal_263[iVar0], false, false, 0);
			if (iLocal_265[iVar0])
			{
				if (!func_28())
				{
					if (!unk_0x1D403DFADBC2DE3C(iLocal_263[iVar0], 0))
					{
						iLocal_265[iVar0] = 0;
						unk_0x1516BB0BAE20386F(iLocal_263[iVar0], 0, 0);
					}
				}
			}
			else if (func_28())
			{
				if (!unk_0x1D403DFADBC2DE3C(iLocal_263[iVar0], 0))
				{
					iLocal_265[iVar0] = 1;
					unk_0x1516BB0BAE20386F(iLocal_263[iVar0], 1, 0);
				}
			}
		}
		iVar0++;
	}
	if (fLocal_266 > 20f)
	{
		bLocal_267 = false;
	}
	else if (fLocal_266 < -20f)
	{
		bLocal_267 = true;
	}
	if (bLocal_267)
	{
		fLocal_266 = (fLocal_266 + 0.25f);
	}
	else
	{
		fLocal_266 = (fLocal_266 - 0.25f);
	}
	if (unk_0x724D816EA203A79E(iLocal_263[0]))
	{
		unk_0x019CE76D5286C95C(iLocal_263[0], (53f + fLocal_266));
	}
	if (unk_0x724D816EA203A79E(iLocal_263[1]))
	{
		unk_0x019CE76D5286C95C(iLocal_263[1], (13f + fLocal_266));
	}
	if (unk_0x724D816EA203A79E(iLocal_263[2]))
	{
		unk_0x019CE76D5286C95C(iLocal_263[2], (250f + fLocal_266));
	}
}

void func_31(int iParam0)//Position - 0x2955
{
	if (!Local_252.f_35[iParam0])
	{
		unk_0x3D3F19B39A42CF7A(Local_252.f_40[iParam0], unk_0xBC25C936A095B5BA(), -1, 0);
		unk_0x6CCBC1B22488DC0C(Local_252.f_40[iParam0], 1000f);
		unk_0x3D669AF9A68FF281(Local_252.f_40[iParam0]);
		Local_252.f_35[iParam0] = 1;
		if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 0)
		{
			unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 3, 0);
			unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
		}
	}
}

int func_32(var uParam0)//Position - 0x29C5
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		vVar0 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) };
	}
	if (!unk_0x1D403DFADBC2DE3C(*uParam0, 0))
	{
		vVar1 = { unk_0x541C2AEF053615BC(*uParam0, true) };
	}
	if (SYSTEM::VDIST2(vVar0, vVar1) < 100f)
	{
		return 1;
	}
	return 0;
}

void func_33()//Position - 0x2A19
{
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) >= 2 || func_15(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), 4, 150, 0))
		{
			if (unk_0x2625AE158F7FFBAD("PRISON_ALARMS"))
			{
				unk_0xA1D24DCCB6F72A84("PRISON_ALARMS", false);
			}
		}
		else
		{
			unk_0x2D23F487A48A1C6D("PRISON_ALARMS", false);
		}
	}
}

void func_34()//Position - 0x2A6F
{
	vector3 vVar0;
	
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 1840.23f, 2471.49f, 41.94113f, 1840.553f, 2751.983f, 54.68177f, 84.25f, 0, true, 0))
		{
			func_57(&Local_70, 2);
		}
		else
		{
			func_55(&Local_70, 2);
		}
	}
	if (iLocal_49 > 20)
	{
		if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			vVar0 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) };
			if (unk_0x62083F80FA40AAD2(unk_0xBC25C936A095B5BA()))
			{
				if (func_15(vVar0, 4, 150, 0))
				{
					func_54(4, 1);
					if (!func_14(&iLocal_78))
					{
						func_11(&iLocal_78);
					}
					if (!bLocal_60)
					{
						if (unk_0x724D816EA203A79E(iLocal_68) && !unk_0x1D403DFADBC2DE3C(iLocal_68, 0))
						{
							func_53(&uLocal_81, 8, iLocal_68, "TANNOY", 0, 1);
							if (func_37(&uLocal_81, "FH1AUD", "FH1_TANNOY", 8, 0, 0, 0))
							{
								bLocal_58 = true;
								bLocal_60 = true;
							}
						}
					}
				}
				else
				{
					func_54(4, 0);
					if (func_14(&iLocal_78))
					{
						func_12(&iLocal_78);
					}
					bLocal_58 = false;
				}
			}
			else
			{
				func_54(4, 0);
				if (func_14(&iLocal_78))
				{
					func_12(&iLocal_78);
				}
				bLocal_58 = false;
			}
			if (bLocal_58)
			{
				if (func_14(&iLocal_78))
				{
					if (func_8(&iLocal_78) > 10f)
					{
						if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) < 4)
						{
							unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 4, 0);
							unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
							bLocal_61 = true;
							bLocal_58 = false;
							func_54(4, 0);
						}
					}
				}
			}
			if (!bLocal_55)
			{
				if (bLocal_60)
				{
					if (!func_36())
					{
						if (unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0))
						{
							unk_0x5C083DB6ACC5827F("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
							unk_0x5C083DB6ACC5827F("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_ALARM", 1, 1);
							bLocal_55 = true;
						}
					}
				}
				else if (unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0))
				{
					unk_0x5C083DB6ACC5827F("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x5C083DB6ACC5827F("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_ALARM", 1, 1);
					bLocal_55 = true;
				}
			}
			if (!bLocal_58)
			{
				if (func_15(vVar0, 4, 100, 0))
				{
					if (!bLocal_55)
					{
						if (bLocal_60)
						{
							if (!func_36())
							{
								unk_0x5C083DB6ACC5827F("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
								unk_0x5C083DB6ACC5827F("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_ALARM", 1, 1);
								bLocal_55 = true;
							}
						}
						else
						{
							unk_0x5C083DB6ACC5827F("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
							unk_0x5C083DB6ACC5827F("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_ALARM", 1, 1);
							bLocal_55 = true;
						}
					}
					func_35();
				}
			}
			iLocal_49 = 0;
		}
	}
	iLocal_49++;
}

void func_35()//Position - 0x2C90
{
	int iVar0;
	
	if (!iLocal_54)
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			iLocal_52[iVar0] = unk_0x3F15B158E03C72E5(vLocal_53[iVar0 /*3*/], 10f, 10f, 10f, 0f, 0, 7);
			iVar0++;
		}
		iLocal_54 = 1;
	}
}

int func_36()//Position - 0x2CD8
{
	if (Global_3DB8 != 0 || unk_0xE6711F601F11B66B())
	{
		return 1;
	}
	return 0;
}

bool func_37(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x2CFA
{
	func_52(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_3DBF = 0;
	Global_3DC1 = 0;
	Global_3DC6 = 0;
	Global_4197 = 0;
	Global_4199 = 0;
	Global_419D = 0;
	Global_280001 = 0;
	return func_38(sParam2, iParam3, 0);
}

int func_38(char* sParam0, int iParam1, bool bParam2)//Position - 0x2D48
{
	Global_3DB9 = 0;
	if (Global_3DB8 == 0 || Global_3DBA == 2)
	{
		if (Global_3DB8 != 0)
		{
			if (iParam1 > Global_3DBA)
			{
				if (Global_3DBF == 0)
				{
					unk_0x1E08809A5041F85B(false);
					Global_389D.f_1 = 3;
					Global_3DB8 = 0;
					Global_3DB9 = 1;
					Global_3DED = 0;
					Global_3DB4 = 0;
					Global_3DB5 = 0;
					Global_3DC3 = 0;
					Global_3DC2 = 0;
					Global_389C = 0;
				}
				else
				{
					func_51();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xE6711F601F11B66B())
		{
			return 0;
		}
		if (func_50(8, -1))
		{
			return 0;
		}
		Global_3E04 = { Global_3DFE };
		func_49();
		Global_3AF1 = { Global_3B96 };
		Global_3DBE = Global_3DBF;
		Global_3DC5 = Global_3DC6;
		Global_280002 = Global_280001;
		Global_3DC7 = { Global_3DD7 };
		Global_3DC0 = Global_3DC1;
		Global_4196 = Global_4197;
		Global_419E = { Global_41A4 };
		Global_4198 = Global_4199;
		Global_419A = Global_419B;
		Global_419C = Global_419D;
		Global_3C3B.f_172 = Global_4195;
		Global_3C3B.f_170 = Global_4193;
		Global_3C3B.f_171 = Global_4194;
		Global_3DB4 = Global_3DB5;
		if (Global_3DBE)
		{
			unk_0x7CB6FD92BE491AD9(&Global_93B, 20);
			unk_0x7CB6FD92BE491AD9(&Global_93C, 17);
			unk_0x7CB6FD92BE491AD9(&Global_93D, 0);
			if (bParam2)
			{
				func_43();
				if (Global_C60[Global_389D /*2811*/][0 /*281*/].f_103 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_389D.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_387B == 1)
			{
				return 0;
			}
			if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
			{
				if (unk_0xABB2AFD7539464EA(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (func_42())
				{
					return 0;
				}
				if (unk_0x7199482D96955B9E(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (unk_0x01666D754C368931(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (unk_0xE959459C9FB1C42E(unk_0xBC25C936A095B5BA(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_11542)
				{
					if (unk_0x149E9368A11035DE(unk_0xBC25C936A095B5BA()))
					{
						return 0;
					}
					if (unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F()))
					{
						return 0;
					}
					if (unk_0x042228744678C7D4(unk_0xBC25C936A095B5BA()))
					{
						return 0;
					}
					if (unk_0x36210078ECC9DC40(unk_0xB5CEFD608600A09F()))
					{
						return 0;
					}
				}
			}
			if (func_41())
			{
				return 0;
			}
			else
			{
				switch (Global_389D.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (unk_0xFA30DFD0084E92FE(Global_93B, 9))
				{
					return 0;
				}
			}
			func_40();
			Global_3DC2 = bParam2;
		}
		Global_3DBA = iParam1;
		StringCopy(&Global_3C3B, sParam0, 24);
		Global_394A = 0;
		func_39();
		return 1;
	}
	if (Global_3DB8 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_3DBA || iParam1 == Global_3DBA)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_51();
	}
	return 0;
}

void func_39()//Position - 0x3014
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_394C[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x1E08809A5041F85B(false);
	Global_3DB8 = 1;
}

void func_40()//Position - 0x3045
{
	Global_3DED = Global_3DEC;
	Global_3DE7 = Global_3DE8;
	Global_3E16 = { Global_3E0A };
	Global_3E1C = { Global_3E10 };
	Global_3DEF = Global_3DEE;
	Global_3E34 = { Global_3E22 };
	Global_3E3A = { Global_3E28 };
	Global_3E40 = { Global_3E2E };
	Global_3E46 = { Global_3E4C };
	Global_68E = Global_68F;
	Global_690 = Global_691;
	Global_3DC3 = Global_3DC4;
	Global_3DC5 = Global_3DC6;
	Global_3DC7 = { Global_3DD7 };
	Global_3DBC = Global_3DBD;
	Global_41B0 = 0;
	Global_3DE9 = 0;
	Global_3DEA = 0;
	unk_0x7CB6FD92BE491AD9(&Global_93C, 16);
}

int func_41()//Position - 0x30DA
{
	if (Global_389D.f_1 == 1 || Global_389D.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_42()//Position - 0x3101
{
	int iVar0;
	int iVar1;
	
	if (Global_11542)
	{
		iVar0 = 0;
		unk_0x9CDD10270A1ACF6F(unk_0xBC25C936A095B5BA(), &iVar1, 1);
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xCDE05E3688DE990D() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (unk_0xA0747FCBCF1D1424(unk_0xBC25C936A095B5BA(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_43()//Position - 0x319A
{
	if (func_2(14))
	{
		if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			if (unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()) == Global_19B04.f_6D75[0 /*29*/])
			{
				Global_389D = 0;
			}
			else if (unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()) == Global_19B04.f_6D75[1 /*29*/])
			{
				Global_389D = 1;
			}
			else if (unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()) == Global_19B04.f_6D75[2 /*29*/])
			{
				Global_389D = 2;
			}
			else
			{
				Global_389D = 0;
			}
		}
	}
	else
	{
		Global_389D = func_44();
		if (Global_389D == 145)
		{
			Global_389D = 3;
		}
		if (Global_11542)
		{
			Global_389D = 3;
		}
		if (Global_389D > 3)
		{
			Global_389D = 3;
		}
	}
}

var func_44()//Position - 0x323C
{
	func_45();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_45()//Position - 0x3255
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_48(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_47(unk_0xBC25C936A095B5BA());
			if (func_46(iVar0) && (!func_2(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_46(Global_19B04.f_932.f_21B.f_10CD))
				{
					Global_19B04.f_932.f_21B.f_10CE = Global_19B04.f_932.f_21B.f_10CD;
				}
				Global_19B04.f_932.f_21B.f_10CF = iVar0;
				Global_19B04.f_932.f_21B.f_10CD = iVar0;
				return;
			}
		}
		else
		{
			if (Global_19B04.f_932.f_21B.f_10CD != 145)
			{
				Global_19B04.f_932.f_21B.f_10CF = Global_19B04.f_932.f_21B.f_10CD;
			}
			return;
		}
	}
	Global_19B04.f_932.f_21B.f_10CD = 145;
}

bool func_46(int iParam0)//Position - 0x3352
{
	return iParam0 < 3;
}

int func_47(int iParam0)//Position - 0x335E
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_48(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_48(int iParam0)//Position - 0x339B
{
	if (func_46(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_49()//Position - 0x33C5
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_3AF1[iVar0 /*10*/] = 0;
		StringCopy(&(Global_3AF1[iVar0 /*10*/].f_1), "", 24);
		Global_3AF1[iVar0 /*10*/].f_7 = 0;
		Global_3AF1[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_3AF1.f_A1 = -99;
	Global_3AF1.f_A2 = { 0f, 0f, 0f };
}

bool func_50(int iParam0, int iParam1)//Position - 0x341C
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_14CC81.f_CB[iParam1];
			}
			break;
	}
	return unk_0xFA30DFD0084E92FE(Global_14CC81.f_418, iParam0);
}

void func_51()//Position - 0x3457
{
	unk_0x5C7DC611411E2CF9();
	Global_41AB = 0;
	if ((unk_0x58E7DDFF8D17A82A() || Global_389D.f_1 == 9) || Global_389C == 1)
	{
		unk_0x1E08809A5041F85B(false);
		Global_3DB8 = 6;
		Global_389D.f_1 = 3;
		return;
	}
	if (unk_0xE6711F601F11B66B())
	{
		unk_0x1E08809A5041F85B(true);
		Global_3DB8 = 6;
		return;
	}
}

void func_52(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x34AE
{
	Global_3B96 = { *uParam0 };
	Global_68F = iParam1;
	StringCopy(&Global_3DFE, sParam2, 24);
	Global_4195 = uParam5;
	if (iParam3 == 0)
	{
		Global_4193 = 1;
		Global_4191 = 0;
	}
	else
	{
		Global_4193 = 0;
		Global_4191 = 1;
	}
	if (iParam4 == 0)
	{
		Global_4194 = 1;
		Global_4192 = 0;
	}
	else
	{
		Global_4194 = 0;
		Global_4192 = 1;
	}
}

void func_53(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x3504
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_11542)
	{
		if (!unk_0x36CEFBE9B745A58D(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x8941EA87BBF38C6F(iParam2, 0);
			}
			else
			{
				unk_0x8941EA87BBF38C6F(iParam2, 1);
			}
		}
		if (!unk_0x36CEFBE9B745A58D(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x7C7F4D01B6DB297B(iParam2, 0);
			}
			else
			{
				unk_0x7C7F4D01B6DB297B(iParam2, 1);
			}
		}
	}
}

void func_54(int iParam0, int iParam1)//Position - 0x359F
{
	unk_0xF0059F27F7BB6680(&Global_635B, iParam0);
	StringCopy(&(Global_635C[iParam0 /*6*/]), unk_0x1377080E9B0BD993(), 24);
	Global_6393[iParam0] = iParam1;
}

void func_55(var uParam0, int iParam1)//Position - 0x35C6
{
	func_56(uParam0, iParam1);
}

void func_56(var uParam0, var uParam1)//Position - 0x35D6
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_57(var uParam0, int iParam1)//Position - 0x35E7
{
	func_58(uParam0, iParam1);
}

void func_58(var uParam0, var uParam1)//Position - 0x35F7
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_59()//Position - 0x360C
{
	unk_0x2CA123B0622F495C(joaat("s_m_m_security_01"));
	unk_0x2CA123B0622F495C(joaat("s_m_m_prisguard_01"));
}

void func_60()//Position - 0x3626
{
	func_62();
	func_61();
}

void func_61()//Position - 0x3636
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x724D816EA203A79E(Local_307.f_1B[iVar0]) && !unk_0x1D403DFADBC2DE3C(Local_307.f_1B[iVar0], 0))
		{
			unk_0x7A535CE1F001F3FE(Local_307.f_1B[iVar0], joaat("weapon_assaultrifle"), -1, true, true);
			unk_0xAF9FC4463EA3090B(Local_307.f_1B[iVar0], 1000);
			unk_0x4106FAF8AA1D69D5(Local_307.f_1B[iVar0], -183807561);
			unk_0xE002A140019092D9(Local_307.f_1B[iVar0], false);
			unk_0x2E35C4FA5F0ED22F(Local_307.f_1B[iVar0], true);
			if (!unk_0x36CEFBE9B745A58D(Local_307.f_1B[iVar0]))
			{
				unk_0xB0C1A00D86375366(Local_307.f_1B[iVar0], Local_307.f_E[iVar0], 0, 0, -1);
			}
		}
		iVar0++;
	}
}

void func_62()//Position - 0x36F1
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x724D816EA203A79E(Local_307.f_1B[iVar0]))
		{
			Local_307.f_1B[iVar0] = unk_0x01B3635C3E8EDD81(6, joaat("s_m_m_prisguard_01"), Local_307[iVar0 /*3*/], Local_307.f_A[iVar0], 1, true);
			SYSTEM::WAIT(0);
		}
		iVar0++;
	}
	vVar1 = { unk_0x89D97EB4FAE4A574(Local_307[1 /*3*/], Local_307.f_A[1], -2f, 0f, 0f) };
	vVar2 = { unk_0x89D97EB4FAE4A574(Local_307[1 /*3*/], Local_307.f_A[1], -1f, 0f, 0f) };
	vVar3 = { unk_0x89D97EB4FAE4A574(Local_307[2 /*3*/], Local_307.f_A[2], 1f, 0f, 0f) };
	vVar4 = { unk_0x89D97EB4FAE4A574(Local_307[2 /*3*/], Local_307.f_A[2], -1f, 0f, 0f) };
	Local_307.f_1F[0] = unk_0x01B3635C3E8EDD81(6, joaat("s_m_m_prisguard_01"), vVar1, Local_307.f_A[1], 1, true);
	Local_307.f_1F[1] = unk_0x01B3635C3E8EDD81(6, joaat("s_m_m_prisguard_01"), vVar2, Local_307.f_A[1], 1, true);
	Local_307.f_1F[2] = unk_0x01B3635C3E8EDD81(6, joaat("s_m_m_prisguard_01"), vVar3, Local_307.f_A[2], 1, true);
	Local_307.f_1F[3] = unk_0x01B3635C3E8EDD81(6, joaat("s_m_m_prisguard_01"), vVar4, Local_307.f_A[2], 1, true);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x724D816EA203A79E(Local_307.f_1F[iVar0]))
		{
			unk_0x7A535CE1F001F3FE(Local_307.f_1F[iVar0], joaat("weapon_assaultrifle"), -1, true, true);
			unk_0xAF9FC4463EA3090B(Local_307.f_1F[iVar0], 500);
			unk_0x4106FAF8AA1D69D5(Local_307.f_1F[iVar0], -183807561);
			unk_0x137C9D9587AFD819(Local_307.f_1F[iVar0], 0);
			unk_0x2E35C4FA5F0ED22F(Local_307.f_1F[iVar0], true);
		}
		iVar0++;
	}
	unk_0x2CA123B0622F495C(joaat("s_m_m_prisguard_01"));
}

void func_63()//Position - 0x38B6
{
	if (bLocal_294)
	{
		iLocal_289 = unk_0x61C05BF08A1E0EFE(joaat("polmav"), 10f, 10f, -30f, 0f, true, true, false);
		unk_0x2D655AA68FA1736B(iLocal_289, true, true, 0);
		unk_0x251A179731E0D207(iLocal_289);
		unk_0x3A8D19D7D434A741(iLocal_289, 0f, 0f, 10f);
		unk_0xAF9FC4463EA3090B(iLocal_289, 500);
		if (func_28())
		{
			bLocal_292 = true;
			unk_0x1516BB0BAE20386F(iLocal_289, 1, 0);
		}
		iLocal_290 = unk_0x01B3635C3E8EDD81(6, joaat("s_m_m_prisguard_01"), 10f, 10f, -20f, 0f, 1, true);
		unk_0xBD53A029D0155A42(iLocal_290, iLocal_289, -1);
		if (!unk_0x1D403DFADBC2DE3C(iLocal_289, 0))
		{
			unk_0x9E6D037EC3389728(iLocal_289, 101, "PrisonHeli", 1);
		}
		unk_0x2CA123B0622F495C(joaat("polmav"));
	}
}

void func_64()//Position - 0x396E
{
	func_69();
	func_68();
	func_67();
	func_66();
	func_65();
}

void func_65()//Position - 0x398A
{
	Local_270[0 /*13*/][0 /*3*/] = { 1827.69f, 2474.181f, 61.7202f };
	Local_270[0 /*13*/][1 /*3*/] = { 1826.054f, 2478.934f, 61.7157f };
	Local_270[0 /*13*/][2 /*3*/] = { 1820.909f, 2477.528f, 61.7153f };
	Local_270[0 /*13*/][3 /*3*/] = { 1822.585f, 2472.122f, 61.7167f };
	unk_0x0A7DA61E068C98D5("miss_Tower_01");
	unk_0x23AF1979778A818F(0, "WORLD_HUMAN_GUARD_STAND", Local_270[0 /*13*/][0 /*3*/], 1879.944f, 2461.988f, 53.5496f, unk_0x491B2241281A03B7(5000, 10000));
	unk_0x23AF1979778A818F(1, "WORLD_HUMAN_GUARD_STAND", Local_270[0 /*13*/][1 /*3*/], 1831.631f, 2522.218f, 54.1376f, unk_0x491B2241281A03B7(5000, 10000));
	unk_0x23AF1979778A818F(2, "WORLD_HUMAN_GUARD_STAND", Local_270[0 /*13*/][2 /*3*/], 1789.07f, 2490.558f, 54.1381f, unk_0x491B2241281A03B7(5000, 10000));
	unk_0x23AF1979778A818F(3, "WORLD_HUMAN_GUARD_STAND", Local_270[0 /*13*/][3 /*3*/], 1789.8f, 2426.876f, 44.7729f, unk_0x491B2241281A03B7(5000, 10000));
	unk_0xAB709D8D3C7D9A8F(0, 1);
	unk_0xAB709D8D3C7D9A8F(1, 2);
	unk_0xAB709D8D3C7D9A8F(2, 3);
	unk_0xAB709D8D3C7D9A8F(3, 0);
	unk_0xF0316D9A3DA3C2BA();
	unk_0xE95BB9D6BBF09F65();
	Local_270[1 /*13*/][0 /*3*/] = { 1764.729f, 2409.139f, 61.7533f };
	Local_270[1 /*13*/][1 /*3*/] = { 1763.129f, 2413.976f, 61.7328f };
	Local_270[1 /*13*/][2 /*3*/] = { 1758.079f, 2411.984f, 61.7403f };
	Local_270[1 /*13*/][3 /*3*/] = { 1760.213f, 2406.827f, 61.7419f };
	unk_0x0A7DA61E068C98D5("miss_Tower_02");
	unk_0x23AF1979778A818F(0, "WORLD_HUMAN_GUARD_STAND", Local_270[1 /*13*/][0 /*3*/], 1879.944f, 2461.988f, 53.5496f, unk_0x491B2241281A03B7(5000, 10000));
	unk_0x23AF1979778A818F(1, "WORLD_HUMAN_GUARD_STAND", Local_270[1 /*13*/][1 /*3*/], 1831.631f, 2522.218f, 54.1376f, unk_0x491B2241281A03B7(5000, 10000));
	unk_0x23AF1979778A818F(2, "WORLD_HUMAN_GUARD_STAND", Local_270[1 /*13*/][2 /*3*/], 1789.07f, 2490.558f, 54.1381f, unk_0x491B2241281A03B7(5000, 10000));
	unk_0x23AF1979778A818F(3, "WORLD_HUMAN_GUARD_STAND", Local_270[1 /*13*/][3 /*3*/], 1789.8f, 2426.876f, 44.7729f, unk_0x491B2241281A03B7(5000, 10000));
	unk_0xAB709D8D3C7D9A8F(0, 1);
	unk_0xAB709D8D3C7D9A8F(1, 2);
	unk_0xAB709D8D3C7D9A8F(2, 3);
	unk_0xAB709D8D3C7D9A8F(3, 0);
	unk_0xF0316D9A3DA3C2BA();
	unk_0xE95BB9D6BBF09F65();
	Local_270[2 /*13*/][0 /*3*/] = { 1658.829f, 2390.888f, 61.7462f };
	Local_270[2 /*13*/][1 /*3*/] = { 1662.521f, 2394.692f, 61.7532f };
	Local_270[2 /*13*/][2 /*3*/] = { 1658.854f, 2398.062f, 61.7573f };
	Local_270[2 /*13*/][3 /*3*/] = { 1655.15f, 2394.705f, 61.7429f };
	unk_0x0A7DA61E068C98D5("miss_Tower_03");
	unk_0x23AF1979778A818F(0, "WORLD_HUMAN_GUARD_STAND", Local_270[2 /*13*/][0 /*3*/], 1655.908f, 2349.021f, 55.1775f, unk_0x491B2241281A03B7(5000, 10000));
	unk_0x23AF1979778A818F(1, "WORLD_HUMAN_GUARD_STAND", Local_270[2 /*13*/][1 /*3*/], 1733.875f, 2385.521f, 44.9049f, unk_0x491B2241281A03B7(5000, 10000));
	unk_0x23AF1979778A818F(2, "WORLD_HUMAN_GUARD_STAND", Local_270[2 /*13*/][2 /*3*/], 1662.234f, 2446.357f, 44.5652f, unk_0x491B2241281A03B7(5000, 10000));
	unk_0x23AF1979778A818F(3, "WORLD_HUMAN_GUARD_STAND", Local_270[2 /*13*/][3 /*3*/], 1524.631f, 2426.997f, 44.6212f, unk_0x491B2241281A03B7(5000, 10000));
	unk_0xAB709D8D3C7D9A8F(0, 1);
	unk_0xAB709D8D3C7D9A8F(1, 2);
	unk_0xAB709D8D3C7D9A8F(2, 3);
	unk_0xAB709D8D3C7D9A8F(3, 0);
	unk_0xF0316D9A3DA3C2BA();
	unk_0xE95BB9D6BBF09F65();
	Local_270[3 /*13*/][0 /*3*/] = { 1537.28f, 2468.338f, 61.7497f };
	Local_270[3 /*13*/][1 /*3*/] = { 1542.189f, 2465.756f, 61.7247f };
	Local_270[3 /*13*/][2 /*3*/] = { 1543.899f, 2470.971f, 61.7482f };
	Local_270[3 /*13*/][3 /*3*/] = { 1539.14f, 2473.264f, 61.7359f };
	unk_0x0A7DA61E068C98D5("miss_Tower_04");
	unk_0x23AF1979778A818F(0, "WORLD_HUMAN_GUARD_STAND", Local_270[3 /*13*/][0 /*3*/], 1455.081f, 2432.642f, 51.3366f, unk_0x491B2241281A03B7(5000, 10000));
	unk_0x23AF1979778A818F(1, "WORLD_HUMAN_GUARD_STAND", Local_270[3 /*13*/][1 /*3*/], 1576.174f, 2407.076f, 44.8143f, unk_0x491B2241281A03B7(5000, 10000));
	unk_0x23AF1979778A818F(2, "WORLD_HUMAN_GUARD_STAND", Local_270[3 /*13*/][2 /*3*/], 1578.1f, 2486.227f, 44.5655f, unk_0x491B2241281A03B7(5000, 10000));
	unk_0x23AF1979778A818F(3, "WORLD_HUMAN_GUARD_STAND", Local_270[3 /*13*/][3 /*3*/], 1512.837f, 2560.419f, 44.8417f, unk_0x491B2241281A03B7(5000, 10000));
	unk_0xAB709D8D3C7D9A8F(0, 1);
	unk_0xAB709D8D3C7D9A8F(1, 2);
	unk_0xAB709D8D3C7D9A8F(2, 3);
	unk_0xAB709D8D3C7D9A8F(3, 0);
	unk_0xF0316D9A3DA3C2BA();
	unk_0xE95BB9D6BBF09F65();
	Local_270[4 /*13*/][0 /*3*/] = { 1535.098f, 2581.919f, 61.7312f };
	Local_270[4 /*13*/][1 /*3*/] = { 1535.124f, 2581.101f, 61.7002f };
	Local_270[4 /*13*/][2 /*3*/] = { 1538.325f, 2585.722f, 61.7251f };
	Local_270[4 /*13*/][3 /*3*/] = { 1534.679f, 2589.268f, 61.7123f };
	unk_0x0A7DA61E068C98D5("miss_Tower_05");
	unk_0x23AF1979778A818F(0, "WORLD_HUMAN_GUARD_STAND", Local_270[4 /*13*/][0 /*3*/], 1484.2f, 2584.409f, 51.9283f, unk_0x491B2241281A03B7(5000, 10000));
	unk_0x23AF1979778A818F(1, "WORLD_HUMAN_GUARD_STAND", Local_270[4 /*13*/][1 /*3*/], 1535.154f, 2538.926f, 44.496f, unk_0x491B2241281A03B7(5000, 10000));
	unk_0x23AF1979778A818F(2, "WORLD_HUMAN_GUARD_STAND", Local_270[4 /*13*/][2 /*3*/], 1570.661f, 2587.814f, 44.5655f, unk_0x491B2241281A03B7(5000, 10000));
	unk_0x23AF1979778A818F(3, "WORLD_HUMAN_GUARD_STAND", Local_270[4 /*13*/][3 /*3*/], 1538.227f, 2655.531f, 44.9156f, unk_0x491B2241281A03B7(5000, 10000));
	unk_0xAB709D8D3C7D9A8F(0, 1);
	unk_0xAB709D8D3C7D9A8F(1, 2);
	unk_0xAB709D8D3C7D9A8F(2, 3);
	unk_0xAB709D8D3C7D9A8F(3, 0);
	unk_0xF0316D9A3DA3C2BA();
	unk_0xE95BB9D6BBF09F65();
	Local_270[5 /*13*/][0 /*3*/] = { 1566.921f, 2682.525f, 61.7716f };
	Local_270[5 /*13*/][1 /*3*/] = { 1567.927f, 2677.463f, 61.7741f };
	Local_270[5 /*13*/][2 /*3*/] = { 1572.574f, 2678.193f, 61.7702f };
	Local_270[5 /*13*/][3 /*3*/] = { 1572.359f, 2683.086f, 61.7664f };
	unk_0x0A7DA61E068C98D5("miss_Tower_06");
	unk_0x23AF1979778A818F(0, "WORLD_HUMAN_GUARD_STAND", Local_270[5 /*13*/][0 /*3*/], 1505.538f, 2727.242f, 37.6965f, unk_0x491B2241281A03B7(5000, 10000));
	unk_0x23AF1979778A818F(1, "WORLD_HUMAN_GUARD_STAND", Local_270[5 /*13*/][1 /*3*/], 1545.95f, 2632.524f, 44.7178f, unk_0x491B2241281A03B7(5000, 10000));
	unk_0x23AF1979778A818F(2, "WORLD_HUMAN_GUARD_STAND", Local_270[5 /*13*/][2 /*3*/], 1599.355f, 2658.319f, 44.5652f, unk_0x491B2241281A03B7(5000, 10000));
	unk_0x23AF1979778A818F(3, "WORLD_HUMAN_GUARD_STAND", Local_270[5 /*13*/][3 /*3*/], 1599.041f, 2713.393f, 44.4309f, unk_0x491B2241281A03B7(5000, 10000));
	unk_0xAB709D8D3C7D9A8F(0, 1);
	unk_0xAB709D8D3C7D9A8F(1, 2);
	unk_0xAB709D8D3C7D9A8F(2, 3);
	unk_0xAB709D8D3C7D9A8F(3, 0);
	unk_0xF0316D9A3DA3C2BA();
	unk_0xE95BB9D6BBF09F65();
	Local_270[6 /*13*/][0 /*3*/] = { 1648.104f, 2761.528f, 61.9103f };
	Local_270[6 /*13*/][1 /*3*/] = { 1646.051f, 2756.671f, 61.9091f };
	Local_270[6 /*13*/][2 /*3*/] = { 1651.533f, 2754.668f, 61.9021f };
	Local_270[6 /*13*/][3 /*3*/] = { 1653.125f, 2759.327f, 61.9056f };
	unk_0x0A7DA61E068C98D5("miss_Tower_07");
	unk_0x23AF1979778A818F(0, "WORLD_HUMAN_GUARD_STAND", Local_270[6 /*13*/][0 /*3*/], 1606.661f, 2815.673f, 37.9512f, unk_0x491B2241281A03B7(5000, 10000));
	unk_0x23AF1979778A818F(1, "WORLD_HUMAN_GUARD_STAND", Local_270[6 /*13*/][1 /*3*/], 1602.887f, 2721.398f, 44.651f, unk_0x491B2241281A03B7(5000, 10000));
	unk_0x23AF1979778A818F(2, "WORLD_HUMAN_GUARD_STAND", Local_270[6 /*13*/][2 /*3*/], 1599.355f, 2658.319f, 44.5652f, unk_0x491B2241281A03B7(5000, 10000));
	unk_0x23AF1979778A818F(3, "WORLD_HUMAN_GUARD_STAND", Local_270[6 /*13*/][3 /*3*/], 1719.225f, 2766.111f, 44.6846f, unk_0x491B2241281A03B7(5000, 10000));
	unk_0xAB709D8D3C7D9A8F(0, 1);
	unk_0xAB709D8D3C7D9A8F(1, 2);
	unk_0xAB709D8D3C7D9A8F(2, 3);
	unk_0xAB709D8D3C7D9A8F(3, 0);
	unk_0xF0316D9A3DA3C2BA();
	unk_0xE95BB9D6BBF09F65();
	Local_270[7 /*13*/][0 /*3*/] = { 1774.523f, 2766.559f, 61.9143f };
	Local_270[7 /*13*/][1 /*3*/] = { 1769.768f, 2763.816f, 61.9248f };
	Local_270[7 /*13*/][2 /*3*/] = { 1772.442f, 2759.139f, 61.9193f };
	Local_270[7 /*13*/][3 /*3*/] = { 1776.893f, 2762.356f, 61.9258f };
	unk_0x0A7DA61E068C98D5("miss_Tower_08");
	unk_0x23AF1979778A818F(0, "WORLD_HUMAN_GUARD_STAND", Local_270[7 /*13*/][0 /*3*/], 1783.204f, 2811.375f, 44.4414f, unk_0x491B2241281A03B7(5000, 10000));
	unk_0x23AF1979778A818F(1, "WORLD_HUMAN_GUARD_STAND", Local_270[7 /*13*/][1 /*3*/], 1709.275f, 2764.432f, 44.5747f, unk_0x491B2241281A03B7(5000, 10000));
	unk_0x23AF1979778A818F(2, "WORLD_HUMAN_GUARD_STAND", Local_270[7 /*13*/][2 /*3*/], 1599.355f, 2658.319f, 44.5652f, unk_0x491B2241281A03B7(5000, 10000));
	unk_0x23AF1979778A818F(3, "WORLD_HUMAN_GUARD_STAND", Local_270[7 /*13*/][3 /*3*/], 1822.456f, 2749.189f, 44.9326f, unk_0x491B2241281A03B7(5000, 10000));
	unk_0xAB709D8D3C7D9A8F(0, 1);
	unk_0xAB709D8D3C7D9A8F(1, 2);
	unk_0xAB709D8D3C7D9A8F(2, 3);
	unk_0xAB709D8D3C7D9A8F(3, 0);
	unk_0xF0316D9A3DA3C2BA();
	unk_0xE95BB9D6BBF09F65();
	Local_270[9 /*13*/][0 /*3*/] = { 1824.288f, 2625.042f, 61.9749f };
	Local_270[9 /*13*/][1 /*3*/] = { 1820.524f, 2621.49f, 61.9951f };
	Local_270[9 /*13*/][2 /*3*/] = { 1820.414f, 2621.544f, 61.9908f };
	Local_270[9 /*13*/][3 /*3*/] = { 1823.45f, 2617.477f, 61.9829f };
	unk_0x0A7DA61E068C98D5("miss_Tower_10");
	unk_0x23AF1979778A818F(0, "WORLD_HUMAN_GUARD_STAND", Local_270[9 /*13*/][0 /*3*/], 1606.661f, 2815.673f, 37.9512f, unk_0x491B2241281A03B7(5000, 10000));
	unk_0x23AF1979778A818F(1, "WORLD_HUMAN_GUARD_STAND", Local_270[9 /*13*/][1 /*3*/], 1602.887f, 2721.398f, 44.651f, unk_0x491B2241281A03B7(5000, 10000));
	unk_0x23AF1979778A818F(2, "WORLD_HUMAN_GUARD_STAND", Local_270[9 /*13*/][2 /*3*/], 1599.355f, 2658.319f, 44.5652f, unk_0x491B2241281A03B7(5000, 10000));
	unk_0x23AF1979778A818F(3, "WORLD_HUMAN_GUARD_STAND", Local_270[9 /*13*/][3 /*3*/], 1719.225f, 2766.111f, 44.6846f, unk_0x491B2241281A03B7(5000, 10000));
	unk_0xAB709D8D3C7D9A8F(0, 1);
	unk_0xAB709D8D3C7D9A8F(1, 2);
	unk_0xAB709D8D3C7D9A8F(2, 3);
	unk_0xAB709D8D3C7D9A8F(3, 0);
	unk_0xF0316D9A3DA3C2BA();
	unk_0xE95BB9D6BBF09F65();
}

void func_66()//Position - 0x44D7
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x724D816EA203A79E(Local_252.f_40[iVar0]) && !unk_0x1D403DFADBC2DE3C(Local_252.f_40[iVar0], 0))
		{
			unk_0x4106FAF8AA1D69D5(Local_252.f_40[iVar0], -183807561);
			unk_0xC8FD3EBBB90E8D7F(Local_252.f_40[iVar0], 132, true);
			unk_0x9C74359FED150B42(Local_252.f_40[iVar0], 300f, 10);
			unk_0x6CCBC1B22488DC0C(Local_252.f_40[iVar0], 1000f);
			unk_0x1D772375218D2BDC(Local_252.f_40[iVar0], 1000f);
			unk_0x5AAB329BBC1053A1(Local_252.f_40[iVar0], 1000f);
			unk_0xE20EB9C9BC14ECEB(Local_252.f_40[iVar0], 2);
			unk_0x91629AC1E1F78419(Local_252.f_40[iVar0], 13, true);
			unk_0x91629AC1E1F78419(Local_252.f_40[iVar0], 0, false);
			unk_0xEB061E1EBFED4D59(Local_252.f_40[iVar0], 1);
			unk_0x54480313BB3E8DD0(Local_252.f_40[iVar0], 1);
			unk_0x4538D2D018750307(Local_252.f_40[iVar0], 0f);
			unk_0x22321800954A532E(Local_252.f_40[iVar0], true);
			unk_0xFC3C88E2313FA926(Local_252.f_40[iVar0], 20);
			unk_0x80F51E5792576467(Local_252.f_40[iVar0], 2);
			unk_0x91629AC1E1F78419(Local_252.f_40[iVar0], 23, false);
			unk_0x7A535CE1F001F3FE(Local_252.f_40[iVar0], joaat("weapon_sniperrifle"), -1, true, true);
			unk_0xAF9FC4463EA3090B(Local_252.f_40[iVar0], 1000);
			unk_0x2E35C4FA5F0ED22F(Local_252.f_40[iVar0], true);
			unk_0x6CCBC1B22488DC0C(Local_252.f_40[iVar0], 1000f);
			if (!unk_0x36CEFBE9B745A58D(Local_252.f_40[iVar0]))
			{
				if (iVar0 == 0)
				{
					unk_0xA2723191FEAB67F1(Local_252.f_40[iVar0], "miss_Tower_01", 1, 0, 1);
				}
				else if (iVar0 == 1)
				{
					unk_0xA2723191FEAB67F1(Local_252.f_40[iVar0], "miss_Tower_02", 1, 0, 1);
				}
				else if (iVar0 == 2)
				{
					unk_0xA2723191FEAB67F1(Local_252.f_40[iVar0], "miss_Tower_03", 1, 0, 1);
				}
				else if (iVar0 == 3)
				{
					unk_0xA2723191FEAB67F1(Local_252.f_40[iVar0], "miss_Tower_04", 1, 0, 1);
				}
				else if (iVar0 == 4)
				{
					unk_0xA2723191FEAB67F1(Local_252.f_40[iVar0], "miss_Tower_05", 1, 0, 1);
				}
				else if (iVar0 == 5)
				{
					unk_0xA2723191FEAB67F1(Local_252.f_40[iVar0], "miss_Tower_06", 1, 0, 1);
				}
				else if (iVar0 == 6)
				{
					unk_0xA2723191FEAB67F1(Local_252.f_40[iVar0], "miss_Tower_07", 1, 0, 1);
				}
				else if (iVar0 == 7)
				{
					unk_0xA2723191FEAB67F1(Local_252.f_40[iVar0], "miss_Tower_08", 1, 0, 1);
				}
				else if (iVar0 == 9)
				{
					unk_0xA2723191FEAB67F1(Local_252.f_40[iVar0], "miss_Tower_10", 1, 0, 1);
				}
				else
				{
					unk_0xB0C1A00D86375366(Local_252.f_40[iVar0], Local_252.f_2A[iVar0], 0, 0, -1);
				}
			}
		}
		iVar0++;
	}
}

void func_67()//Position - 0x4785
{
	int iVar0;
	
	if (!unk_0x33CC9445B2DF9387(1823.845f, 2621.267f, 57f, 0.5f))
	{
		iLocal_263[0] = unk_0x61C05BF08A1E0EFE(joaat("polmav"), 1823.845f, 2621.267f, 57f, 53f, true, true, false);
		if (unk_0x724D816EA203A79E(iLocal_263[0]) && !unk_0x1D403DFADBC2DE3C(iLocal_263[0], 0))
		{
			iLocal_264[0] = unk_0xFD8987C090669BD5(iLocal_263[0], 6, joaat("s_m_m_prisguard_01"), -1, 1, true);
			unk_0x30034548191398D0(iLocal_264[0], false);
			unk_0x4106FAF8AA1D69D5(iLocal_264[0], iLocal_250);
			unk_0xD434A01DEA38A939(iLocal_263[0], false, 0);
			unk_0xDC078F87049ECECE(iLocal_263[0], false, 0);
			unk_0x30034548191398D0(iLocal_263[0], false);
			unk_0x346478B12F69D4E3(iLocal_263[0], true);
		}
		SYSTEM::WAIT(0);
	}
	if (!unk_0x33CC9445B2DF9387(1761.418f, 2410.378f, 61f, 0.5f))
	{
		iLocal_263[1] = unk_0x61C05BF08A1E0EFE(joaat("polmav"), 1761.418f, 2410.378f, 61f, 13f, true, true, false);
		if (unk_0x724D816EA203A79E(iLocal_263[1]) && !unk_0x1D403DFADBC2DE3C(iLocal_263[1], 0))
		{
			iLocal_264[1] = unk_0xFD8987C090669BD5(iLocal_263[1], 6, joaat("s_m_m_prisguard_01"), -1, 1, true);
			unk_0x30034548191398D0(iLocal_264[1], false);
			unk_0x4106FAF8AA1D69D5(iLocal_264[1], iLocal_250);
			unk_0xD434A01DEA38A939(iLocal_263[1], false, 0);
			unk_0xDC078F87049ECECE(iLocal_263[1], false, 0);
			unk_0x30034548191398D0(iLocal_263[1], false);
			unk_0x346478B12F69D4E3(iLocal_263[1], true);
		}
		SYSTEM::WAIT(0);
	}
	if (!unk_0x33CC9445B2DF9387(1534.635f, 2585.162f, 61f, 0.5f))
	{
		iLocal_263[2] = unk_0x61C05BF08A1E0EFE(joaat("polmav"), 1534.635f, 2585.162f, 61f, 250f, true, true, false);
		if (unk_0x724D816EA203A79E(iLocal_263[2]) && !unk_0x1D403DFADBC2DE3C(iLocal_263[2], 0))
		{
			iLocal_264[2] = unk_0xFD8987C090669BD5(iLocal_263[2], 6, joaat("s_m_m_prisguard_01"), -1, 1, true);
			unk_0x30034548191398D0(iLocal_264[2], false);
			unk_0x4106FAF8AA1D69D5(iLocal_264[2], iLocal_250);
			unk_0xD434A01DEA38A939(iLocal_263[2], false, 0);
			unk_0xDC078F87049ECECE(iLocal_263[2], false, 0);
			unk_0x30034548191398D0(iLocal_263[2], false);
			unk_0x346478B12F69D4E3(iLocal_263[2], true);
		}
		SYSTEM::WAIT(0);
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if ((unk_0x724D816EA203A79E(iLocal_264[iVar0]) && !unk_0x1D403DFADBC2DE3C(iLocal_264[iVar0], 0)) && !unk_0x1D403DFADBC2DE3C(iLocal_263[iVar0], 0))
		{
			if (func_28())
			{
				iLocal_265[iVar0] = 1;
				unk_0x1516BB0BAE20386F(iLocal_263[iVar0], 1, 0);
			}
		}
		iVar0++;
	}
}

void func_68()//Position - 0x4A39
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!unk_0x724D816EA203A79E(Local_252.f_40[iVar0]))
		{
			Local_252.f_40[iVar0] = unk_0x01B3635C3E8EDD81(6, joaat("s_m_m_prisguard_01"), Local_252[iVar0 /*3*/], Local_252.f_1F[iVar0], 1, true);
			unk_0x2CA123B0622F495C(joaat("s_m_m_prisguard_01"));
			SYSTEM::WAIT(0);
		}
		iVar0++;
	}
}

void func_69()//Position - 0x4A9A
{
	Local_252[0 /*3*/] = { 1827.69f, 2474.181f, 61.7202f };
	Local_252[1 /*3*/] = { 1764.729f, 2409.139f, 61.7533f };
	Local_252[2 /*3*/] = { 1658.829f, 2390.888f, 61.7462f };
	Local_252[3 /*3*/] = { 1537.28f, 2468.338f, 61.7497f };
	Local_252[4 /*3*/] = { 1530.493f, 2585.172f, 61.7001f };
	Local_252[5 /*3*/] = { 1566.921f, 2682.525f, 61.7716f };
	Local_252[6 /*3*/] = { 1648.104f, 2761.528f, 61.9103f };
	Local_252[7 /*3*/] = { 1774.523f, 2766.559f, 61.9143f };
	Local_252[8 /*3*/] = { 1852.475f, 2697.632f, 61.9547f };
	Local_252[9 /*3*/] = { 1824.288f, 2625.042f, 61.9749f };
	Local_252.f_1F[0] = 248.9733f;
	Local_252.f_1F[1] = 45.8793f;
	Local_252.f_1F[2] = 186.3656f;
	Local_252.f_1F[3] = 313.5206f;
	Local_252.f_1F[4] = 95.9574f;
	Local_252.f_1F[5] = 289.3531f;
	Local_252.f_1F[6] = 13.7511f;
	Local_252.f_1F[7] = 0f;
	Local_252.f_1F[8] = 208.5786f;
	Local_252.f_1F[9] = 280.9389f;
}

int func_70()//Position - 0x4C0A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		while (!unk_0x1E8349F219AC5AF9(Local_307.f_E[iVar0]))
		{
			SYSTEM::WAIT(0);
		}
		iVar0++;
	}
	return 1;
}

int func_71()//Position - 0x4C3E
{
	if (bLocal_298)
	{
		if (!unk_0xD6513D668481290A(joaat("s_m_y_prisoner_01")))
		{
			return 0;
		}
	}
	return 1;
}

int func_72()//Position - 0x4C5E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!unk_0x1E8349F219AC5AF9(Local_252.f_2A[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	if (!unk_0xD6513D668481290A(joaat("polmav")))
	{
		return 0;
	}
	if (!unk_0xD6513D668481290A(joaat("s_m_m_prisguard_01")))
	{
		return 0;
	}
	return 1;
}

int func_73()//Position - 0x4CB1
{
	if (bLocal_294)
	{
		if (!unk_0xD6513D668481290A(joaat("polmav")))
		{
			return 0;
		}
		if (!unk_0x00D24B3F2A5CD22C(101, "PrisonHeli"))
		{
			return 0;
		}
	}
	return 1;
}

int func_74()//Position - 0x4CE1
{
	if (!unk_0xD6513D668481290A(joaat("s_m_m_security_01")))
	{
		return 0;
	}
	if (!unk_0xD6513D668481290A(joaat("s_m_m_prisguard_01")))
	{
		return 0;
	}
	if (!unk_0xD6513D668481290A(joaat("polmav")))
	{
		return 0;
	}
	return 1;
}

void func_75()//Position - 0x4D1D
{
	int iVar0;
	
	func_76();
	iVar0 = 0;
	while (iVar0 < 3)
	{
		unk_0x44840FD68E426678(Local_307.f_E[iVar0]);
		iVar0++;
	}
}

void func_76()//Position - 0x4D48
{
	Local_307[0 /*3*/] = { 1768.628f, 2538.97f, 44.4054f };
	Local_307[1 /*3*/] = { 1633.613f, 2498.849f, 44.4117f };
	Local_307[2 /*3*/] = { 1622.61f, 2555.683f, 44.4051f };
	Local_307.f_A[0] = 0f;
	Local_307.f_A[1] = 0f;
	Local_307.f_A[2] = 198.4323f;
	Local_307.f_E[0] = "PatrolGuard02";
	Local_307.f_E[1] = "PatrolGuard03";
	Local_307.f_E[2] = "PatrolGuard04";
}

void func_77()//Position - 0x4DD8
{
	int iVar0;
	
	Local_252.f_2A[0] = "TowerGuard01";
	Local_252.f_2A[1] = "TowerGuard02";
	Local_252.f_2A[2] = "TowerGuard03";
	Local_252.f_2A[3] = "TowerGuard04";
	Local_252.f_2A[4] = "TowerGuard05";
	Local_252.f_2A[5] = "TowerGuard06";
	Local_252.f_2A[6] = "TowerGuard07";
	Local_252.f_2A[7] = "TowerGuard08";
	Local_252.f_2A[8] = "TowerGuard09";
	Local_252.f_2A[9] = "TowerGuard10";
	iVar0 = 0;
	while (iVar0 < 10)
	{
		unk_0x44840FD68E426678(Local_252.f_2A[iVar0]);
		iVar0++;
	}
	unk_0xF243B7A14FCFD0F4(joaat("polmav"));
	unk_0xF243B7A14FCFD0F4(joaat("s_m_m_prisguard_01"));
}

void func_78()//Position - 0x4E8C
{
	bLocal_294 = false;
	if (func_28())
	{
		iLocal_295 = (unk_0x491B2241281A03B7(0, 65535) % 2);
		if (iLocal_295 == 0)
		{
			bLocal_294 = true;
			unk_0xF243B7A14FCFD0F4(joaat("polmav"));
			unk_0x1B2A7C8188ADBE04(101, "PrisonHeli");
		}
		else
		{
			bLocal_294 = false;
		}
	}
}

void func_79()//Position - 0x4ED0
{
	unk_0xF243B7A14FCFD0F4(joaat("s_m_m_security_01"));
	unk_0xF243B7A14FCFD0F4(joaat("s_m_m_prisguard_01"));
	unk_0xF243B7A14FCFD0F4(joaat("polmav"));
}

void func_80()//Position - 0x4EF3
{
	iLocal_249 = iLocal_249;
	iLocal_249 = 0;
	func_81();
	func_34();
	Local_70.f_4 = 75;
	Local_70.f_6 = 15;
	unk_0x18EA2F325EEF2817(joaat("prop_gate_prison_01"), 1845f, 2605f, 45f, 1, 0f, 0f, 0f);
	unk_0x18EA2F325EEF2817(joaat("prop_gate_prison_01"), 1819.274f, 2608.537f, 44.6195f, 1, 0f, 50f, 0f);
	unk_0xB2CB6EAA6B280A84("Prison_Guards", &iLocal_250);
	unk_0xB2CB6EAA6B280A84("Prison_Prisoners", &iLocal_251);
	unk_0xA902E18EDF6FA0C8(2, iLocal_250, iLocal_251);
	unk_0xA902E18EDF6FA0C8(2, iLocal_251, iLocal_250);
	unk_0xA902E18EDF6FA0C8(1, iLocal_250, -1533126372);
	unk_0xA902E18EDF6FA0C8(1, -1533126372, iLocal_250);
	unk_0xA902E18EDF6FA0C8(3, 1862763509, iLocal_251);
	unk_0xA902E18EDF6FA0C8(3, iLocal_251, 1862763509);
}

void func_81()//Position - 0x4FB7
{
	vLocal_53[0 /*3*/] = { 1809.816f, 2482.877f, 44.4744f };
	vLocal_53[1 /*3*/] = { 1755.823f, 2424.904f, 44.4319f };
	vLocal_53[2 /*3*/] = { 1661.2f, 2410.096f, 44.4265f };
	vLocal_53[3 /*3*/] = { 1555.966f, 2476.43f, 44.4042f };
	vLocal_53[4 /*3*/] = { 1549.141f, 2583.103f, 44.4225f };
	vLocal_53[5 /*3*/] = { 1581.156f, 2671.974f, 44.481f };
	vLocal_53[6 /*3*/] = { 1655.49f, 2743.69f, 44.4665f };
	vLocal_53[7 /*3*/] = { 1768.776f, 2748.527f, 44.4402f };
	vLocal_53[8 /*3*/] = { 1831.2f, 2696f, 44.4578f };
	vLocal_53[9 /*3*/] = { 1803.121f, 2617.781f, 44.5082f };
	vLocal_53[10 /*3*/] = { 1817.221f, 2608.387f, 44.6204f };
	vLocal_53[11 /*3*/] = { 1843.838f, 2608.361f, 44.6178f };
}

void func_82()//Position - 0x50CB
{
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		if ((unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 1879.956f, 2705.097f, 52.07341f, 1869.859f, 2726.776f, 59.82338f, 24.75f, 0, true, 0) || unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 1833.113f, 2520.888f, 52.26086f, 1833.115f, 2554.431f, 61.25998f, 15f, 0, true, 0)) || unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 1832.742f, 2568.421f, 48.87375f, 1833.015f, 2596.529f, 57.12439f, 27.75f, 0, true, 0))
		{
			if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 0)
			{
				unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 2, 0);
				unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
			}
		}
	}
	if (!iLocal_56)
	{
		if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 1917.889f, 2618.476f, -45.677f, 1822.889f, 2618.476f, 45.677f, 195f, 0, false, 0))
			{
				if (unk_0x1DCE9C751E8B9558(unk_0xB5CEFD608600A09F()))
				{
					unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 4, 0);
					unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
					unk_0xA902E18EDF6FA0C8(5, 1862763509, -183807561);
					unk_0xA902E18EDF6FA0C8(5, -183807561, 1862763509);
					iLocal_56 = 1;
				}
				if ((unk_0x04880508C862E589(1874.072f, 2605.423f, 44.6723f, 100f, 1) && !unk_0x231DB1D0F4218A1B(unk_0xB5CEFD608600A09F())) || (unk_0x32E373675659FDB0(unk_0xBC25C936A095B5BA()) && !unk_0x1DCE9C751E8B9558(unk_0xB5CEFD608600A09F())))
				{
					unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
					unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 1, 0);
					unk_0xA902E18EDF6FA0C8(5, 1862763509, -183807561);
					unk_0xA902E18EDF6FA0C8(5, -183807561, 1862763509);
					iLocal_56 = 1;
				}
			}
		}
	}
}

void func_83(bool bParam0)//Position - 0x5294
{
	int iVar0;
	
	func_89();
	func_88();
	func_87();
	func_86();
	func_85();
	func_84();
	unk_0x2D23F487A48A1C6D("PRISON_ALARMS", true);
	if (iLocal_56)
	{
		unk_0xA902E18EDF6FA0C8(2, 1862763509, -183807561);
		unk_0xA902E18EDF6FA0C8(2, -183807561, 1862763509);
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (unk_0x2A0D5F9585271A68(iLocal_52[iVar0]))
		{
			unk_0x5BF83EEC9AFDCD0E(iLocal_52[iVar0]);
		}
		iVar0++;
	}
	unk_0x18EA2F325EEF2817(joaat("prop_gate_prison_01"), 1845f, 2605f, 45f, 1, 0f, 0f, 0f);
	unk_0x18EA2F325EEF2817(joaat("prop_gate_prison_01"), 1819.274f, 2608.537f, 44.6195f, 1, 0f, 50f, 0f);
	if (bParam0)
	{
		unk_0x6C5F5B5F6894CCE3(1695.1f, 2595.8f, 50f, 1000f, 1, 0, 0, false);
	}
	unk_0x95E4B6F3ED223F5A();
}

void func_84()//Position - 0x536A
{
	if (unk_0x724D816EA203A79E(iLocal_66))
	{
		unk_0x1E7A09C1710FB071(&iLocal_66);
	}
	if (unk_0x724D816EA203A79E(iLocal_68))
	{
		unk_0x02537C8C1BEEB477(&iLocal_68);
	}
	if (unk_0x724D816EA203A79E(iLocal_67))
	{
		unk_0x1E7A09C1710FB071(&iLocal_67);
	}
	if (unk_0x724D816EA203A79E(iLocal_69))
	{
		unk_0x02537C8C1BEEB477(&iLocal_69);
	}
}

void func_85()//Position - 0x53AE
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x724D816EA203A79E(Local_307.f_1B[iVar0]))
		{
			if (unk_0x2DA8CA50A72528FB(Local_307.f_24[iVar0]))
			{
				unk_0x07B8ECB35A4ED3AC(&(Local_307.f_24[iVar0]));
			}
			if (unk_0x41A5D6415E2CC10E(Local_307.f_1B[iVar0]))
			{
				unk_0xF845620A03C7425B(&(Local_307.f_1B[iVar0]));
			}
			else
			{
				unk_0x02537C8C1BEEB477(&(Local_307.f_1B[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x724D816EA203A79E(Local_307.f_1F[iVar0]))
		{
			if (unk_0x2DA8CA50A72528FB(Local_307.f_28[iVar0]))
			{
				unk_0x07B8ECB35A4ED3AC(&(Local_307.f_28[iVar0]));
			}
			if (unk_0x41A5D6415E2CC10E(Local_307.f_1F[iVar0]))
			{
				unk_0xF845620A03C7425B(&(Local_307.f_1F[iVar0]));
			}
			else
			{
				unk_0x02537C8C1BEEB477(&(Local_307.f_1F[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_86()//Position - 0x548E
{
	if (unk_0x2DA8CA50A72528FB(iLocal_301))
	{
		unk_0x07B8ECB35A4ED3AC(&iLocal_301);
	}
	if (unk_0x724D816EA203A79E(iLocal_299))
	{
		unk_0xCF6040807CC0E4A5(&iLocal_299);
	}
}

void func_87()//Position - 0x54B8
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (unk_0x724D816EA203A79E(uLocal_296[iVar0]))
		{
			if (unk_0x2DA8CA50A72528FB(uLocal_297[iVar0]))
			{
				unk_0x07B8ECB35A4ED3AC(&(uLocal_297[iVar0]));
			}
			unk_0xF845620A03C7425B(&(uLocal_296[iVar0]));
		}
		iVar0++;
	}
}

void func_88()//Position - 0x5505
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x724D816EA203A79E(iLocal_263[iVar0]))
		{
			unk_0xCF6040807CC0E4A5(&(iLocal_263[iVar0]));
		}
		if (unk_0x724D816EA203A79E(iLocal_264[iVar0]))
		{
			unk_0xF845620A03C7425B(&(iLocal_264[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x724D816EA203A79E(Local_252.f_40[iVar0]))
		{
			if (unk_0x2DA8CA50A72528FB(Local_252.f_4B[iVar0]))
			{
				unk_0x07B8ECB35A4ED3AC(&(Local_252.f_4B[iVar0]));
			}
			if (unk_0x41A5D6415E2CC10E(Local_252.f_40[iVar0]))
			{
				unk_0xF845620A03C7425B(&(Local_252.f_40[iVar0]));
			}
			else
			{
				unk_0x02537C8C1BEEB477(&(Local_252.f_40[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_89()//Position - 0x55BE
{
	if (unk_0x2DA8CA50A72528FB(iLocal_291))
	{
		unk_0x07B8ECB35A4ED3AC(&iLocal_291);
	}
	if (unk_0x724D816EA203A79E(iLocal_289))
	{
		if (unk_0x41A5D6415E2CC10E(iLocal_289))
		{
			unk_0xCF6040807CC0E4A5(&iLocal_289);
			unk_0xF845620A03C7425B(&iLocal_290);
		}
		else
		{
			func_90(&iLocal_289, &iLocal_290);
			unk_0x1E7A09C1710FB071(&iLocal_289);
		}
	}
}

void func_90(int iParam0, var uParam1)//Position - 0x560D
{
	if (((unk_0x724D816EA203A79E(*iParam0) && unk_0x724D816EA203A79E(*uParam1)) && !unk_0x1D403DFADBC2DE3C(*iParam0, 0)) && !unk_0x1D403DFADBC2DE3C(*uParam1, 0))
	{
		if (unk_0x2A348A3A98B80B13(*iParam0))
		{
			if (unk_0xB34E411B0A4BF096(*iParam0))
			{
				if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
				{
					unk_0xA7EC3DF47EFA2131(*uParam1, *iParam0, 0, 0, unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), 8, 50f, -1f, 30f, 100, 50, 1);
				}
			}
		}
	}
}

