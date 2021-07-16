// Generated by Haxe 4.1.5
#ifndef INCLUDED_openfl_display_DOMRenderer
#define INCLUDED_openfl_display_DOMRenderer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
HX_DECLARE_CLASS2(openfl,display,CanvasRenderer)
HX_DECLARE_CLASS2(openfl,display,DOMRenderer)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectRenderer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES DOMRenderer_obj : public  ::openfl::display::DisplayObjectRenderer_obj
{
	public:
		typedef  ::openfl::display::DisplayObjectRenderer_obj super;
		typedef DOMRenderer_obj OBJ_;
		DOMRenderer_obj();

	public:
		enum { _hx_ClassId = 0x0e77aebf };

		void __construct( ::Dynamic element);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display.DOMRenderer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.display.DOMRenderer"); }
		static ::hx::ObjectPtr< DOMRenderer_obj > __new( ::Dynamic element);
		static ::hx::ObjectPtr< DOMRenderer_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic element);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DOMRenderer_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DOMRenderer",c5,91,39,91); }

		static void __boot();
		static  ::Dynamic __meta__;
		 ::Dynamic element;
		Float pixelRatio;
		 ::openfl::display::CanvasRenderer _hx___canvasRenderer;
		::Array< ::Dynamic> _hx___clipRects;
		 ::openfl::geom::Rectangle _hx___currentClipRect;
		int _hx___numClipRects;
		::String _hx___transformOriginProperty;
		::String _hx___transformProperty;
		::String _hx___vendorPrefix;
		int _hx___z;
		void applyStyle( ::openfl::display::DisplayObject parent, ::Dynamic childElement);
		::Dynamic applyStyle_dyn();

		void clearStyle( ::Dynamic childElement);
		::Dynamic clearStyle_dyn();

		void _hx___applyStyle( ::openfl::display::DisplayObject displayObject,bool setTransform,bool setAlpha,bool setClip);
		::Dynamic _hx___applyStyle_dyn();

		void _hx___popMask();

		void _hx___popMaskObject( ::openfl::display::DisplayObject object,::hx::Null< bool >  handleScrollRect);

		void _hx___popMaskRect();

		void _hx___pushMask( ::openfl::display::DisplayObject mask);

		void _hx___pushMaskObject( ::openfl::display::DisplayObject object,::hx::Null< bool >  handleScrollRect);

		void _hx___pushMaskRect( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix transform);

		void _hx___render(::Dynamic object);

		void _hx___renderDrawable(::Dynamic object);
		::Dynamic _hx___renderDrawable_dyn();

		void _hx___renderDrawableClear(::Dynamic object);
		::Dynamic _hx___renderDrawableClear_dyn();

		void _hx___setBlendMode( ::Dynamic value);

		void _hx___updateClip( ::openfl::display::DisplayObject displayObject);
		::Dynamic _hx___updateClip_dyn();

};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_DOMRenderer */ 
