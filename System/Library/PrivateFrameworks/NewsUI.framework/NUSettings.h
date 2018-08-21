/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsUI/NewsUI-Structs.h>
#import <libobjc.A.dylib/NUSettings.h>

@protocol NUSettings <NSObject>
@property (nonatomic,readonly) BOOL shouldShowArticlesInExcerptMode; 
@required
-(BOOL)shouldShowArticlesInExcerptMode;

@end

#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NUSettings : NSObject <NUSettings, NSCopying>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL shouldShowArticlesInExcerptMode; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)shouldShowArticlesInExcerptMode;
@end

