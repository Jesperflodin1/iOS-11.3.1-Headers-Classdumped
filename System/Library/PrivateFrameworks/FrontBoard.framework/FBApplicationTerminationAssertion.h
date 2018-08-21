/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:16 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBApplicationTerminationAssertion : NSObject {

	NSString* _bundleID;
	NSString* _reason;
	unsigned long long _serialNumber;
	id _plugInHoldToken;

}

@property (nonatomic,copy) NSString * bundleID;                            //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSString * reason;                              //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) unsigned long long serialNumber;              //@synthesize serialNumber=_serialNumber - In the implementation block
@property (nonatomic,retain) id plugInHoldToken;                           //@synthesize plugInHoldToken=_plugInHoldToken - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)reason;
-(NSString *)bundleID;
-(void)setReason:(NSString *)arg1 ;
-(id)plugInHoldToken;
-(void)setPlugInHoldToken:(id)arg1 ;
-(unsigned long long)serialNumber;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setSerialNumber:(unsigned long long)arg1 ;
@end

