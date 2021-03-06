/* Autogenerated by png2wx.pl on Thu May  1 11:32:28 2014 */
#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#	include <wx/wx.h>
#endif
#include <wx/mstream.h>
#include "icons.h"
#include <wx/fileconf.h>

wxBitmap *_img_photolayer;
wxBitmap *_img_photolayer_pi;


#include "ocpn_plugin.h"
wxString _svg_photolayer;
wxString _svg_photolayer_rollover;
wxString _svg_photolayer_toggled;




void initialize_images(void)
{
	{
		wxMemoryInputStream sm("\211PNG\r\n\032\n\000\000\000\rIHDR\000\000\000\030\000\000\000\030\b\006\000\000\000\340w=\370\000\000\000\004sBIT\b\b\b\b|\bd\210\000\000\000\011pHYs\000\000\016\304\000\000\016\304\001\225+\016\033\000\000\000\031tEXtSoftware\000www.inkscape.org\233\356<\032\000\000\001\257IDATH\211\355\225\275\252\342P\024FWbr\221\024\342 Z\b\n\202H\212 \"\006\004{_\301Z\273\274\2156\202\205\370\000\276\200\2556\202\215\026*\244\020\021\354\324\024\001c\021\210\267\220\311\214\343\317\314\034\270S\315\356\316\267O\326\227}\262w\216\244\353\272\003|\343\213B\376*\360?3P\336%UU%\235N\013\303\035\307yoP,\026\205\r.\227\013\343\361\370\365\021e2\031a\370\365ze\261X\340\373\376s\003M\3230\014C\b\016\260\331l8\036\217\300\223\217,I\022\245R\011Ey{z/\303u]l\333\016\327\017\006\371|\236D\"!\004\017\202\200\371|N\020\004\317\rb\261\030\205BA\b\016\260^\257q]\367N\013\r\"\221\b\345r\031Y\026\033\215\303\341\300v\273}\320\245\357\277\n\3030\310\345rBpEQ0M\223h4\032j\373\375\236v\273}\233\203d2)\014\a0M\223l6\033\256}\337\247\323\351\020\004\301\315\300\363<&\223I\270!\225JaY\326\037u\222,\313\304\343\361;m8\034\262\333\355n\325\001\234\317\3470\251\252*\315f\223T*%T\215m\333\214F\243\037/\360\353\206F\243qW\356\337\204\347yt\273\335\327m\252\353:\365z]\b\0160\030\0148\235NwZh\240i\032\226e\011\267\351l6c:\235>\350!\255\325j\011O\260\3438\364\373\375\2479\031\240V\253Q\255V\205\340A\020\320\353\365\356\032\345\347P>>>\244J\245\302j\265\0222X.\227o\237\225\376_\372\277\213O\231V\207\266\016\302\022\354\000\000\000\000IEND\256B`\202", 562);
		_img_photolayer = new wxBitmap(wxImage(sm));
	}
	{
		wxMemoryInputStream sm("\211PNG\r\n\032\n\000\000\000\rIHDR\000\000\000 \000\000\000 \b\006\000\000\000szz\364\000\000\000\011pHYs\000\000\016\304\000\000\016\304\001\225+\016\033\000\000\000\242IDATX\303\355\327\315\011\3030\014\206\341\327%K8\003v\216\316\321\001\3451\324[ $Nt\221>(\361\331\360\274\350\340\237ff\216p\275\020\257'@\036\260D7\366\365\253\233@\026\036\n\310\304\207\275\257\003\262\361\313\011T\340\323\200*\3744\240\022?\004T\343\273\000\005\276\005\250p\200\346|\\\205\247\336\005\021\034\240E\036$k\357\272\2438\023\277\r\310\306m\214y@\005>\235@\025~\032P\211\037\002\252\361]\200\002\337\002T8@\303\335Ux\372\263\374\016\aX\"\233\236\237\321_\a\374\000\301\351H\322C\226\a\357\000\000\000\000IEND\256B`\202", 240);
		_img_photolayer_pi = new wxBitmap(wxImage(sm));
	}

#ifdef PHOTOLAYER_USE_SVG
	wxFileName fn;
	wxString tmp_path;

	tmp_path = GetPluginDataDir("photolayer_pi");
	fn.SetPath(tmp_path);
	fn.AppendDir(_T("data"));

	fn.SetFullName(_T("photolayer.svg"));
	_svg_photolayer = fn.GetFullPath();
	fn.SetFullName(_T("photolayer_rollover.svg"));
	_svg_photolayer_rollover = fn.GetFullPath();
	fn.SetFullName(_T("photolayer_toggled.svg"));
	_svg_photolayer_toggled = fn.GetFullPath();
#endif

	return;
}
