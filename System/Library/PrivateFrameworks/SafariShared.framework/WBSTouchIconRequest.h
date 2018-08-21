/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:43 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/SafariShared-Structs.h>
#import <SafariShared/WBSSiteMetadataRequest.h>

@class NSString;

@interface WBSTouchIconRequest : WBSSiteMetadataRequest {

	BOOL _iconGenerationEnabled;
	NSString* _monogramTitle;
	CGSize _minimumIconSize;
	CGSize _maximumIconSize;

}

@property (getter=isIconGenerationEnabled,nonatomic,readonly) BOOL iconGenerationEnabled;              //@synthesize iconGenerationEnabled=_iconGenerationEnabled - In the implementation block
@property (nonatomic,readonly) CGSize minimumIconSize;                                                 //@synthesize minimumIconSize=_minimumIconSize - In the implementation block
@property (nonatomic,readonly) CGSize maximumIconSize;                                                 //@synthesize maximumIconSize=_maximumIconSize - In the implementation block
@property (nonatomic,copy,readonly) NSString * monogramTitle;                                          //@synthesize monogramTitle=_monogramTitle - In the implementation block
+(id)requestWithTitle:(id)arg1 url:(id)arg2 minimumIconSize:(CGSize)arg3 maximumIconSize:(CGSize)arg4 iconGenerationEnabled:(BOOL)arg5 ;
+(id)requestWithTitle:(id)arg1 url:(id)arg2 minimumIconSize:(CGSize)arg3 maximumIconSize:(CGSize)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(CGSize)maximumIconSize;
-(BOOL)isIconGenerationEnabled;
-(NSString *)monogramTitle;
-(CGSize)minimumIconSize;
-(id)initWithTitle:(id)arg1 url:(id)arg2 minimumIconSize:(CGSize)arg3 maximumIconSize:(CGSize)arg4 ;
-(id)initWithTitle:(id)arg1 url:(id)arg2 minimumIconSize:(CGSize)arg3 maximumIconSize:(CGSize)arg4 iconGenerationEnabled:(BOOL)arg5 ;
@end

