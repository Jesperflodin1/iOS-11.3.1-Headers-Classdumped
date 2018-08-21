/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXComponent.h>

@class NSString, SXJSONArray;

@interface SXTextComponent : SXComponent

@property (nonatomic,readonly) NSString * text; 
@property (nonatomic,readonly) NSString * textStyle; 
@property (nonatomic,readonly) SXJSONArray * inlineTextStyles; 
+(/*^block*/id)valueClassBlockForPropertyWithName:(id)arg1 ;
+(id)typeString;
-(SXJSONArray *)inlineTextStyles;
-(NSString *)textStyle;
-(NSString *)text;
-(unsigned long long)traits;
@end
