/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CARAutomaticDNDStatus;

@interface CARDNDUtility : NSObject {

	CARAutomaticDNDStatus* _DNDStatus;

}

@property (nonatomic,retain) CARAutomaticDNDStatus * DNDStatus;              //@synthesize DNDStatus=_DNDStatus - In the implementation block
+(id)sharedInstance;
-(CARAutomaticDNDStatus *)DNDStatus;
-(id)outputFromRhodesUtility;
-(void)setDNDStatus:(CARAutomaticDNDStatus *)arg1 ;
@end
