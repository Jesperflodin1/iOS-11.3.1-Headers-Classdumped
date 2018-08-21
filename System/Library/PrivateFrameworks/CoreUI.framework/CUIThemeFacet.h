/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <libobjc.A.dylib/CUIThemeImageSource.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface CUIThemeFacet : NSObject <CUIThemeImageSource, NSCopying, NSCoding> {

	renditionkeytoken* _renditionKeyList;
	unsigned long long _themeIndex;
	long long _renditionType;
	CGSize _thumbnailSize;
	CGPoint _hotSpot;
	int _isTintable;
	struct {
		unsigned hasCheckedButtonGlyph : 1;
		unsigned isButtonGlyph : 1;
		unsigned reserved : 14;
	}  _fFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)themeNamed:(id)arg1 forBundleIdentifier:(id)arg2 error:(id*)arg3 ;
+(id)_themeStoreForThemeIndex:(unsigned long long)arg1 ;
+(id)facetWithElement:(long long)arg1 part:(long long)arg2 dimension1:(long long)arg3 dimension2:(long long)arg4 fromTheme:(unsigned long long)arg5 ;
+(id)_facetWithKeyList:(const renditionkeytoken*)arg1 andRenditionKeyClass:(Class)arg2 orRenditionKey:(id)arg3 fromTheme:(unsigned long long)arg4 ;
+(void)_invalidateArtworkCaches;
+(unsigned long long)themeForBundleIdentifier:(id)arg1 error:(id*)arg2 ;
+(unsigned long long)themeWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
+(unsigned long long)themeWithBytes:(const void*)arg1 length:(unsigned long long)arg2 error:(id*)arg3 ;
+(void)themeUnregisterThemeRef:(unsigned long long)arg1 ;
+(id)debug_bundleIdentifierForThemeRef:(unsigned long long)arg1 ;
+(id)facetWithElement:(long long)arg1 part:(long long)arg2 fromTheme:(unsigned long long)arg3 ;
+(id)facetWithRenditionKey:(id)arg1 fromTheme:(unsigned long long)arg2 ;
+(id)cursorFacetWithName:(id)arg1 fromTheme:(unsigned long long)arg2 ;
+(BOOL)assetExistsForRenditionKey:(id)arg1 fromTheme:(unsigned long long)arg2 ;
+(void)initialize;
-(id)_rendition;
-(id)renditionKey;
-(BOOL)isTintable;
-(id)_themeStore;
-(id)imageForSliceIndex:(long long)arg1 ;
-(BOOL)_isButtonGlyph;
-(id)_renditionForSpecificKey:(id)arg1 ;
-(void)_drawAsMaskSpecificRenditionKey:(id)arg1 inFrame:(CGRect)arg2 context:(CGContextRef)arg3 alpha:(double)arg4 operation:(int)arg5 isFocused:(int)arg6 ;
-(void)_drawSpecificRenditionKey:(id)arg1 inFrame:(CGRect)arg2 context:(CGContextRef)arg3 alpha:(double)arg4 operation:(int)arg5 isFocused:(int)arg6 isFlipped:(BOOL)arg7 effects:(id)arg8 ;
-(id)initWithRenditionKey:(id)arg1 fromTheme:(unsigned long long)arg2 ;
-(void)_initWithRenditionKey:(id)arg1 ;
-(void)_applyFixedAttributesToKey:(id)arg1 ;
-(CGImageRef)copyLayerImageContentsAndCenter:(CGRect*)arg1 renditionKey:(id)arg2 ;
-(void)updateLayer:(id)arg1 effects:(id)arg2 ;
-(id)gradientWithKeyAdjustment:(id)arg1 angle:(double*)arg2 style:(unsigned long long*)arg3 ;
-(id)_makeLayerFromCAPackageData;
-(CGImageRef)copyLayerImageContentsAndCenter:(CGRect*)arg1 ;
-(id)blendModeAsCAFilterString;
-(void)_drawSpecificRenditionKey:(id)arg1 inFrame:(CGRect)arg2 context:(CGContextRef)arg3 isFocused:(int)arg4 isFlipped:(BOOL)arg5 effects:(id)arg6 ;
-(void)drawInFrame:(CGRect)arg1 alpha:(double)arg2 operation:(int)arg3 isFocused:(int)arg4 context:(CGContextRef)arg5 effects:(id)arg6 ;
-(id)themeRendition;
-(void)drawInFrame:(CGRect)arg1 alpha:(double)arg2 owner:(id)arg3 userInfo:(id)arg4 context:(CGContextRef)arg5 ;
-(void)drawHighlightInFrame:(CGRect)arg1 alpha:(double)arg2 owner:(id)arg3 userInfo:(id)arg4 context:(CGContextRef)arg5 ;
-(void)drawMaskInFrame:(CGRect)arg1 alpha:(double)arg2 owner:(id)arg3 userInfo:(id)arg4 context:(CGContextRef)arg5 ;
-(void)_updateSpecificRenditionKey:(id)arg1 isFocused:(BOOL*)arg2 owner:(id)arg3 userInfo:(id)arg4 ;
-(BOOL)_canGetRenditionForKey:(id)arg1 withDrawingLayer:(long long)arg2 ;
-(id)_imageForRenditionFromKey:(id)arg1 withSize:(CGSize)arg2 isMask:(BOOL)arg3 ;
-(void)drawInFrame:(CGRect)arg1 alpha:(double)arg2 operation:(int)arg3 owner:(id)arg4 userInfo:(id)arg5 context:(CGContextRef)arg6 ;
-(void)drawHighlightInFrame:(CGRect)arg1 alpha:(double)arg2 operation:(int)arg3 owner:(id)arg4 userInfo:(id)arg5 context:(CGContextRef)arg6 ;
-(void)_drawMaskFromSpecificRenditionKey:(id)arg1 inFrame:(CGRect)arg2 alpha:(double)arg3 operation:(int)arg4 isFocused:(int)arg5 context:(CGContextRef)arg6 ;
-(void)drawInFrame:(CGRect)arg1 alpha:(double)arg2 operation:(int)arg3 isFocused:(int)arg4 keyAdjustment:(id)arg5 context:(CGContextRef)arg6 ;
-(void)drawHighlightInFrame:(CGRect)arg1 alpha:(double)arg2 operation:(int)arg3 keyAdjustment:(id)arg4 context:(CGContextRef)arg5 ;
-(void)drawMaskInFrame:(CGRect)arg1 alpha:(double)arg2 operation:(int)arg3 isFocused:(int)arg4 keyAdjustment:(id)arg5 context:(CGContextRef)arg6 ;
-(id)renditionForSpecificKeyWrapper:(id)arg1 ;
-(void)_drawSpecificRenditionKey:(id)arg1 rendition:(id)arg2 inFrame:(CGRect)arg3 context:(CGContextRef)arg4 alpha:(double)arg5 operation:(int)arg6 isFocused:(int)arg7 isFlipped:(BOOL)arg8 effects:(id)arg9 ;
-(void)drawGradientInFrame:(CGRect)arg1 angle:(double)arg2 alpha:(double)arg3 operation:(int)arg4 isFocused:(int)arg5 keyAdjustment:(id)arg6 context:(CGContextRef)arg7 ;
-(long long)_sliceIndexForSlice:(long long)arg1 ofRendition:(id)arg2 ;
-(id)_approximateRenditionForRenditionKey:(id)arg1 ;
-(id)imageForState:(long long)arg1 value:(long long)arg2 ;
-(BOOL)isValidButtonImageSourceForSize:(unsigned long long)arg1 ;
-(id)imageForState:(long long)arg1 value:(long long)arg2 size:(unsigned long long)arg3 ;
-(double)alphaWithKeyAdjustment:(id)arg1 ;
-(int)blendModeWithKeyAdjustment:(id)arg1 ;
-(id)blendModeAsCAFilterStringWithKeyAjustment:(id)arg1 ;
-(long long)renditionType;
-(CGSize)_thumbnailSizeForRendition:(id)arg1 ;
-(id)imageForState:(long long)arg1 withValue:(long long)arg2 ;
-(BOOL)hasValueSlices;
-(CGPoint)_hotSpot;
-(void)_setHasCheckedButtonGlyph:(BOOL)arg1 ;
-(void)_setIsButtonGlyph:(BOOL)arg1 ;
-(id)makeLayer;
-(void)updateLayer:(id)arg1 ;
-(void)drawInFrame:(CGRect)arg1 isFocused:(int)arg2 context:(CGContextRef)arg3 ;
-(void)drawInFrame:(CGRect)arg1 alpha:(double)arg2 isFocused:(int)arg3 context:(CGContextRef)arg4 effects:(id)arg5 ;
-(void)drawInFrame:(CGRect)arg1 alpha:(double)arg2 isFocused:(int)arg3 context:(CGContextRef)arg4 ;
-(void)drawInFrame:(CGRect)arg1 isFocused:(int)arg2 context:(CGContextRef)arg3 effects:(id)arg4 ;
-(void)drawAsOnePartWithSlice:(int)arg1 inFrame:(CGRect)arg2 isFocused:(int)arg3 context:(CGContextRef)arg4 effects:(id)arg5 ;
-(void)drawAbsoluteAnimationFrame:(double)arg1 destinationFrame:(CGRect)arg2 isFocused:(int)arg3 context:(CGContextRef)arg4 ;
-(void)drawAnimationFrameMappedFrom0_1RangedValue:(double)arg1 destinationFrame:(CGRect)arg2 isFocused:(int)arg3 context:(CGContextRef)arg4 ;
-(void)drawSegmentInFrame:(CGRect)arg1 isFocused:(int)arg2 segmentType:(int)arg3 context:(CGContextRef)arg4 effects:(id)arg5 ;
-(CGImageRef)copySegmentLayerContents:(int)arg1 andCenter:(CGRect*)arg2 leftSeparatorWidth:(double)arg3 rightSeparatorWidth:(double)arg4 renditionKey:(id)arg5 effects:(id)arg6 ;
-(void)drawInFrame:(CGRect)arg1 owner:(id)arg2 userInfo:(id)arg3 context:(CGContextRef)arg4 ;
-(void)drawHighlightInFrame:(CGRect)arg1 owner:(id)arg2 userInfo:(id)arg3 context:(CGContextRef)arg4 ;
-(void)drawMaskInFrame:(CGRect)arg1 owner:(id)arg2 userInfo:(id)arg3 context:(CGContextRef)arg4 ;
-(BOOL)hitTestAtPoint:(CGPoint)arg1 inFrame:(CGRect)arg2 owner:(id)arg3 userInfo:(id)arg4 ;
-(void)drawPulseInFrame:(CGRect)arg1 pulseValue:(double)arg2 owner:(id)arg3 userInfo:(id)arg4 context:(CGContextRef)arg5 ;
-(void)drawInFrame:(CGRect)arg1 alpha:(double)arg2 isFocused:(int)arg3 keyAdjustment:(id)arg4 context:(CGContextRef)arg5 ;
-(void)drawHighlightInFrame:(CGRect)arg1 alpha:(double)arg2 keyAdjustment:(id)arg3 context:(CGContextRef)arg4 ;
-(void)drawMaskInFrame:(CGRect)arg1 alpha:(double)arg2 isFocused:(int)arg3 keyAdjustment:(id)arg4 context:(CGContextRef)arg5 ;
-(void)drawPulseInFrame:(CGRect)arg1 pulseValue:(double)arg2 isFocused:(int)arg3 keyAdjustment:(id)arg4 context:(CGContextRef)arg5 ;
-(void)_drawSlice:(long long)arg1 inFrame:(CGRect)arg2 withKeyAdjustment:(id)arg3 context:(CGContextRef)arg4 ;
-(id)renditionMetricsWithKeyAdjustment:(id)arg1 ;
-(id)renditionSliceInformationForRect:(CGRect)arg1 keyAdjustment:(id)arg2 ;
-(BOOL)isValidButtonImageSource;
-(id)imageWithKeyAdjustment:(id)arg1 ;
-(CGSize)sizeForSegmentOfType:(int)arg1 ;
-(void)_setThemeIndex:(unsigned long long)arg1 ;
-(CGSize)topLeftCapSize;
-(id)maskForSlice:(long long)arg1 withKeyAdjustment:(id)arg2 ;
-(id)imageForSlice:(long long)arg1 withKeyAdjustment:(id)arg2 ;
-(id)imageWithSize:(CGSize)arg1 keyAdjustment:(id)arg2 ;
-(id)highlightWithSize:(CGSize)arg1 keyAdjustment:(id)arg2 ;
-(id)maskWithSize:(CGSize)arg1 keyAdjustment:(id)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(double)alpha;
-(id)imageForState:(long long)arg1 ;
-(id)image;
-(long long)controlSize;
-(void)setControlSize:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)thumbnailSize;
-(int)blendMode;
-(id)displayName;
-(id)thumbnail;
-(CGSize)imageSize;
-(unsigned long long)themeIndex;
@end

