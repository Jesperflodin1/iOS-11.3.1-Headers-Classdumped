/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXResource.h>

@class NSString;

@interface SXImageResource : SXResource

@property (nonatomic,readonly) CGSize dimensions; 
@property (nonatomic,readonly) NSString * imageIdentifier; 
+(id)typeString;
-(NSString *)imageIdentifier;
-(CGSize)dimensions;
-(id)description;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)heightForImageWidth:(double)arg1 ;
-(double)widthForImageHeight:(double)arg1 ;
-(CGSize)sizeThatFills:(CGSize)arg1 ;
@end

