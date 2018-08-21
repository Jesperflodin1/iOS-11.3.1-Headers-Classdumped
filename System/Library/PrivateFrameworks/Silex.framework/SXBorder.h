/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXJSONObject.h>

@class SXStrokeStyle;

@interface SXBorder : SXJSONObject

@property (nonatomic,readonly) SXStrokeStyle * all; 
@property (nonatomic,readonly) SXStrokeStyle * top; 
@property (nonatomic,readonly) SXStrokeStyle * bottom; 
@property (nonatomic,readonly) SXStrokeStyle * left; 
@property (nonatomic,readonly) SXStrokeStyle * right; 
-(SXStrokeStyle *)right;
-(SXStrokeStyle *)left;
-(SXStrokeStyle *)bottom;
-(SXStrokeStyle *)top;
-(SXStrokeStyle *)all;
-(id)defaultStrokeStyle;
-(BOOL)shouldBeDotted;
-(BOOL)isSolid;
@end

