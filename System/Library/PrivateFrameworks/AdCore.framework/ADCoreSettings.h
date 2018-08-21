/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:16 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AdCore/ADSingleton.h>

@class NSUUID, NSURL, NSString, SSAccount, ACAccount;

@interface ADCoreSettings : ADSingleton {

	BOOL _educationModeEnabled;
	BOOL _internationalRoaming;
	BOOL _hasDeterminedRoamingStatus;
	int _connectionType;
	float _timezone;
	int _runState;
	NSUUID* _IDFA;
	NSURL* _defaultServerURL;
	NSURL* _defaultConfigurationServerURL;
	double _jingleTimeoutInterval;
	double _adServerTimeoutInterval;
	double _NSURLConnectionTimeout;
	double _NSURLTransactionTimeout;
	NSString* _osVersionAndBuild;
	NSString* _deviceModel;
	NSString* _bundleIdentifier;
	NSString* _storefrontLocalizationLanguage;
	NSString* _homeCarrierMCC;
	NSString* _homeCarrierMNC;
	NSString* _currentCarrierMCC;
	NSString* _currentCarrierMNC;
	NSString* _iTunesStorefront;

}

@property (nonatomic,retain) NSUUID * IDFA;                                                      //@synthesize IDFA=_IDFA - In the implementation block
@property (nonatomic,retain) NSURL * defaultServerURL;                                           //@synthesize defaultServerURL=_defaultServerURL - In the implementation block
@property (nonatomic,retain) NSURL * defaultConfigurationServerURL;                              //@synthesize defaultConfigurationServerURL=_defaultConfigurationServerURL - In the implementation block
@property (assign,nonatomic) int segmentRetrievalInterval; 
@property (assign,nonatomic) int maxSegmentSendInterval; 
@property (assign,nonatomic) double jingleTimeoutInterval;                                       //@synthesize jingleTimeoutInterval=_jingleTimeoutInterval - In the implementation block
@property (assign,nonatomic) double adServerTimeoutInterval;                                     //@synthesize adServerTimeoutInterval=_adServerTimeoutInterval - In the implementation block
@property (assign,nonatomic) double NSURLConnectionTimeout;                                      //@synthesize NSURLConnectionTimeout=_NSURLConnectionTimeout - In the implementation block
@property (assign,nonatomic) double NSURLTransactionTimeout;                                     //@synthesize NSURLTransactionTimeout=_NSURLTransactionTimeout - In the implementation block
@property (nonatomic,retain) NSString * osVersionAndBuild;                                       //@synthesize osVersionAndBuild=_osVersionAndBuild - In the implementation block
@property (nonatomic,retain) NSString * deviceModel;                                             //@synthesize deviceModel=_deviceModel - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                                        //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,nonatomic) int connectionType;                                                 //@synthesize connectionType=_connectionType - In the implementation block
@property (assign,nonatomic) float timezone;                                                     //@synthesize timezone=_timezone - In the implementation block
@property (nonatomic,readonly) NSString * localeIdentifier; 
@property (nonatomic,retain) NSString * storefrontLocalizationLanguage;                          //@synthesize storefrontLocalizationLanguage=_storefrontLocalizationLanguage - In the implementation block
@property (nonatomic,readonly) BOOL isManagedAppleID; 
@property (nonatomic,readonly) BOOL isManagediCloudAccount; 
@property (nonatomic,readonly) BOOL deviceLimitsAdTracking; 
@property (nonatomic,readonly) BOOL limitAdTrackingRestrictionEnabledBySpringboard; 
@property (nonatomic,readonly) BOOL educationModeEnabled;                                        //@synthesize educationModeEnabled=_educationModeEnabled - In the implementation block
@property (nonatomic,copy) NSString * homeCarrierMCC;                                            //@synthesize homeCarrierMCC=_homeCarrierMCC - In the implementation block
@property (nonatomic,copy) NSString * homeCarrierMNC;                                            //@synthesize homeCarrierMNC=_homeCarrierMNC - In the implementation block
@property (nonatomic,copy) NSString * currentCarrierMCC;                                         //@synthesize currentCarrierMCC=_currentCarrierMCC - In the implementation block
@property (nonatomic,copy) NSString * currentCarrierMNC;                                         //@synthesize currentCarrierMNC=_currentCarrierMNC - In the implementation block
@property (assign,nonatomic) BOOL internationalRoaming;                                          //@synthesize internationalRoaming=_internationalRoaming - In the implementation block
@property (assign,nonatomic) BOOL hasDeterminedRoamingStatus;                                    //@synthesize hasDeterminedRoamingStatus=_hasDeterminedRoamingStatus - In the implementation block
@property (assign,nonatomic) int runState;                                                       //@synthesize runState=_runState - In the implementation block
@property (nonatomic,retain) NSString * iTunesStorefront;                                        //@synthesize iTunesStorefront=_iTunesStorefront - In the implementation block
@property (nonatomic,readonly) SSAccount * iTunesStoreAccount; 
@property (nonatomic,readonly) NSString * iTunesAccountIdentifier; 
@property (nonatomic,readonly) NSString * customJinglePayload; 
@property (nonatomic,readonly) ACAccount * iCloudAccount; 
@property (nonatomic,readonly) NSString * iCloudAccountIdentifier; 
@property (nonatomic,readonly) NSString * iCloudDSID; 
+(id)sharedInstance;
+(BOOL)educationModeEnabled;
-(float)timezone;
-(void)setTimezone:(float)arg1 ;
-(int)connectionType;
-(void)setConnectionType:(int)arg1 ;
-(id)init;
-(NSString *)bundleIdentifier;
-(NSString *)localeIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(BOOL)isManagedAppleID;
-(id)deviceDescription;
-(int)runState;
-(void)setRunState:(int)arg1 ;
-(NSString *)iTunesAccountIdentifier;
-(NSString *)customJinglePayload;
-(NSUUID *)IDFA;
-(void)setIDFA:(NSUUID *)arg1 ;
-(BOOL)deviceLimitsAdTracking;
-(BOOL)educationModeEnabled;
-(NSString *)iCloudDSID;
-(void)setOsVersionAndBuild:(NSString *)arg1 ;
-(NSString *)osVersionAndBuild;
-(double)NSURLConnectionTimeout;
-(double)NSURLTransactionTimeout;
-(NSURL *)defaultConfigurationServerURL;
-(double)adServerTimeoutInterval;
-(NSString *)iTunesStorefront;
-(void)reloadStorefront:(/*^block*/id)arg1 ;
-(SSAccount *)iTunesStoreAccount;
-(BOOL)isManagediCloudAccount;
-(int)deviceRunStateForBundleIdentifier:(id)arg1 ;
-(void)setITunesStorefront:(NSString *)arg1 ;
-(BOOL)limitAdTrackingRestrictionEnabledBySpringboard;
-(void)gatherTelephonyData;
-(void)setHomeCarrierMNC:(NSString *)arg1 ;
-(void)setHomeCarrierMCC:(NSString *)arg1 ;
-(void)setCurrentCarrierMNC:(NSString *)arg1 ;
-(void)setCurrentCarrierMCC:(NSString *)arg1 ;
-(NSString *)homeCarrierMNC;
-(NSString *)homeCarrierMCC;
-(NSString *)currentCarrierMNC;
-(NSString *)currentCarrierMCC;
-(void)setInternationalRoaming:(BOOL)arg1 ;
-(void)setHasDeterminedRoamingStatus:(BOOL)arg1 ;
-(NSURL *)defaultServerURL;
-(void)setStorefrontLocalizationLanguage:(NSString *)arg1 ;
-(NSString *)iCloudAccountIdentifier;
-(int)segmentRetrievalInterval;
-(void)setSegmentRetrievalInterval:(int)arg1 ;
-(int)maxSegmentSendInterval;
-(void)setMaxSegmentSendInterval:(int)arg1 ;
-(void)setDefaultServerURL:(NSURL *)arg1 ;
-(void)setDefaultConfigurationServerURL:(NSURL *)arg1 ;
-(double)jingleTimeoutInterval;
-(void)setJingleTimeoutInterval:(double)arg1 ;
-(void)setAdServerTimeoutInterval:(double)arg1 ;
-(void)setNSURLConnectionTimeout:(double)arg1 ;
-(void)setNSURLTransactionTimeout:(double)arg1 ;
-(NSString *)storefrontLocalizationLanguage;
-(BOOL)internationalRoaming;
-(BOOL)hasDeterminedRoamingStatus;
-(NSString *)deviceModel;
-(void)setDeviceModel:(NSString *)arg1 ;
-(void)expire;
-(ACAccount *)iCloudAccount;
@end

