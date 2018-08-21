/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <MediaPlaybackCore/MPCPlaybackDelegationProperties.h>

@class NSString, MPCPrivateListeningStateSource, NSTimeZone;

@interface MPCMutablePlaybackDelegationProperties : MPCPlaybackDelegationProperties

@property (assign,nonatomic) unsigned long long storeAccountID; 
@property (nonatomic,copy) NSString * deviceGUID; 
@property (nonatomic,copy) NSString * deviceName; 
@property (nonatomic,copy) MPCPrivateListeningStateSource * privateListeningStateSource; 
@property (assign,nonatomic) long long systemReleaseType; 
@property (nonatomic,copy) NSString * requestUserAgent; 
@property (nonatomic,copy) NSTimeZone * timeZone; 
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setDeviceGUID:(NSString *)arg1 ;
-(void)setSystemReleaseType:(long long)arg1 ;
-(void)setStoreAccountID:(unsigned long long)arg1 ;
-(void)setDeviceName:(NSString *)arg1 ;
-(void)setRequestUserAgent:(NSString *)arg1 ;
-(void)setPrivateListeningStateSource:(MPCPrivateListeningStateSource *)arg1 ;
@end
