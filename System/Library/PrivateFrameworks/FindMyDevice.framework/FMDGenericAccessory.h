/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/FMDAudioAccessory.h>
#import <libobjc.A.dylib/FMDAccessory.h>

@class NSString, NSURL, FMDAccessoryIdentifier;

@interface FMDGenericAccessory : NSObject <NSSecureCoding, FMDAudioAccessory, FMDAccessory> {

	FMDAccessoryIdentifier* _accessoryIdentifier;
	NSString* _audioRoutingIdentifier;
	NSURL* _audioURL;

}

@property (nonatomic,retain) FMDAccessoryIdentifier * accessoryIdentifier;              //@synthesize accessoryIdentifier=_accessoryIdentifier - In the implementation block
@property (nonatomic,retain) NSString * audioRoutingIdentifier;                         //@synthesize audioRoutingIdentifier=_audioRoutingIdentifier - In the implementation block
@property (nonatomic,retain) NSURL * audioURL;                                          //@synthesize audioURL=_audioURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL playingSound; 
+(BOOL)supportsSecureCoding;
+(id)copyAccessory:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(NSURL *)audioURL;
-(NSString *)audioRoutingIdentifier;
-(BOOL)playingSound;
-(void)setAudioRoutingIdentifier:(NSString *)arg1 ;
-(void)setAudioURL:(NSURL *)arg1 ;
-(FMDAccessoryIdentifier *)accessoryIdentifier;
-(void)setAccessoryIdentifier:(FMDAccessoryIdentifier *)arg1 ;
@end

