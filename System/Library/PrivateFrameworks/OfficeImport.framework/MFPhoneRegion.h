/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/MFRegion.h>

@class OITSUBezierPath;

@interface MFPhoneRegion : MFRegion {

	OITSUBezierPath* m_path;
	CGRect m_bounds;

}
-(void)dealloc;
-(id)pathForClippingWithDeviceContext:(id)arg1 ;
-(int)fill:(id)arg1 in_brush:(id)arg2 ;
-(int)invert:(id)arg1 ;
-(int)frame:(id)arg1 in_brush:(id)arg2 ;
-(id)initWithRects:(id)arg1 in_bounds:(CGRect)arg2 in_dc:(id)arg3 ;
-(id)initWithPath:(id)arg1 in_bounds:(CGRect)arg2 ;
@end
