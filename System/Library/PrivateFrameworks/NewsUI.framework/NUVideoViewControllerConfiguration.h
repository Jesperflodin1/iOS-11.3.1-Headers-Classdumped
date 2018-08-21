/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsUI/NewsUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/SXVideoViewControllerConfiguration.h>

@class NUVideoViewControllerAdConfiguration;

@interface NUVideoViewControllerConfiguration : NSObject <NSCopying, SXVideoViewControllerConfiguration> {

	BOOL _preferredMuteState;
	BOOL _pagingAllowed;
	BOOL _sharingEnabled;
	NUVideoViewControllerAdConfiguration* _adConfiguration;

}

@property (getter=isSharingEnabled,nonatomic,readonly) BOOL sharingEnabled;                              //@synthesize sharingEnabled=_sharingEnabled - In the implementation block
@property (nonatomic,copy,readonly) NUVideoViewControllerAdConfiguration * adConfiguration;              //@synthesize adConfiguration=_adConfiguration - In the implementation block
@property (nonatomic,readonly) BOOL preferredMuteState;                                                  //@synthesize preferredMuteState=_preferredMuteState - In the implementation block
@property (getter=isPagingAllowed,nonatomic,readonly) BOOL pagingAllowed;                                //@synthesize pagingAllowed=_pagingAllowed - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)preferredMuteState;
-(BOOL)isPagingAllowed;
-(id)initWithSharingEnabled:(BOOL)arg1 preferredMuteState:(BOOL)arg2 pagingAllowed:(BOOL)arg3 adConfiguration:(id)arg4 ;
-(BOOL)isSharingEnabled;
-(NUVideoViewControllerAdConfiguration *)adConfiguration;
@end

