/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXJSONObject.h>

@class SXUnitConverter, SXDataTableBorder;

@interface SXDataTableBorderSides : SXJSONObject {

	SXUnitConverter* _unitConverter;

}

@property (nonatomic,readonly) SXDataTableBorder * top; 
@property (nonatomic,readonly) SXDataTableBorder * right; 
@property (nonatomic,readonly) SXDataTableBorder * bottom; 
@property (nonatomic,readonly) SXDataTableBorder * left; 
@property (nonatomic,retain) SXUnitConverter * unitConverter;              //@synthesize unitConverter=_unitConverter - In the implementation block
-(SXDataTableBorder *)left;
-(SXDataTableBorder *)bottom;
-(SXDataTableBorder *)right;
-(SXDataTableBorder *)top;
-(id)borderForValue:(id)arg1 ;
-(SXUnitConverter *)unitConverter;
-(void)setUnitConverter:(SXUnitConverter *)arg1 ;
-(id)topWithValue:(id)arg1 withType:(int)arg2 ;
-(id)rightWithValue:(id)arg1 withType:(int)arg2 ;
-(id)bottomWithValue:(id)arg1 withType:(int)arg2 ;
-(id)leftWithValue:(id)arg1 withType:(int)arg2 ;
@end

