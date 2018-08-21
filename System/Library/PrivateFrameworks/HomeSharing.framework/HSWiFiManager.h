/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:00 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HomeSharing/HomeSharing-Structs.h>
@interface HSWiFiManager : NSObject {

	SCPreferencesRef _wifiPreferences;
	BOOL _wiFiEnabled;
	BOOL _wiFiAssociated;

}

@property (assign,getter=isWiFiEnabled,nonatomic) BOOL wiFiEnabled;                    //@synthesize wiFiEnabled=_wiFiEnabled - In the implementation block
@property (assign,getter=isWiFiAssociated,nonatomic) BOOL wiFiAssociated;              //@synthesize wiFiAssociated=_wiFiAssociated - In the implementation block
+(id)sharedWiFiManager;
-(id)init;
-(void)dealloc;
-(void)setWiFiEnabled:(BOOL)arg1 ;
-(BOOL)isWiFiEnabled;
-(id)_processIdentifier;
-(BOOL)_getWiFiEnabledFromPrefs;
-(BOOL)_getWiFiAssociated;
-(void)setWiFiAssociated:(BOOL)arg1 ;
-(void)_wifiCallBack:(unsigned)arg1 ;
-(BOOL)isWiFiAssociated;
@end

