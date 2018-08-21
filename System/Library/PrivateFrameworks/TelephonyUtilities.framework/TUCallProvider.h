/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:24 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSSet, NSURL, NSArray, TUSandboxExtendedURL, NSData;

@interface TUCallProvider : NSObject <NSSecureCoding, NSCopying> {

	BOOL _supportsAudioOnly;
	BOOL _supportsAudioAndVideo;
	BOOL _supportsEmergency;
	BOOL _supportsVoicemail;
	BOOL _supportsRecents;
	BOOL _supportsCurrentPlatform;
	unsigned _audioSessionID;
	NSString* _identifier;
	NSString* _localizedName;
	NSSet* _supportedHandleTypes;
	NSURL* _bundleURL;
	NSString* _bundleIdentifier;
	NSArray* _emergencyLabeledHandles;
	NSArray* _handoffIdentifiers;
	TUSandboxExtendedURL* _sandboxExtendedRingtoneSoundURL;
	NSURL* _originalRingtoneSoundURL;
	NSData* _iconTemplateImageData;
	unsigned long long _maximumCallGroups;
	unsigned long long _maximumCallsPerCallGroup;

}

@property (nonatomic,copy) NSString * identifier;                                                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSURL * bundleURL;                                                     //@synthesize bundleURL=_bundleURL - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                                           //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSSet * supportedHandleTypes;                                          //@synthesize supportedHandleTypes=_supportedHandleTypes - In the implementation block
@property (nonatomic,copy) NSArray * emergencyLabeledHandles;                                     //@synthesize emergencyLabeledHandles=_emergencyLabeledHandles - In the implementation block
@property (nonatomic,copy) NSArray * handoffIdentifiers;                                          //@synthesize handoffIdentifiers=_handoffIdentifiers - In the implementation block
@property (nonatomic,retain) NSURL * ringtoneSoundURL; 
@property (nonatomic,retain) TUSandboxExtendedURL * sandboxExtendedRingtoneSoundURL;              //@synthesize sandboxExtendedRingtoneSoundURL=_sandboxExtendedRingtoneSoundURL - In the implementation block
@property (nonatomic,retain) NSURL * originalRingtoneSoundURL;                                    //@synthesize originalRingtoneSoundURL=_originalRingtoneSoundURL - In the implementation block
@property (nonatomic,copy) NSData * iconTemplateImageData;                                        //@synthesize iconTemplateImageData=_iconTemplateImageData - In the implementation block
@property (nonatomic,copy) NSString * localizedName;                                              //@synthesize localizedName=_localizedName - In the implementation block
@property (assign,nonatomic) unsigned long long maximumCallGroups;                                //@synthesize maximumCallGroups=_maximumCallGroups - In the implementation block
@property (assign,nonatomic) unsigned long long maximumCallsPerCallGroup;                         //@synthesize maximumCallsPerCallGroup=_maximumCallsPerCallGroup - In the implementation block
@property (assign,nonatomic) BOOL supportsAudioOnly;                                              //@synthesize supportsAudioOnly=_supportsAudioOnly - In the implementation block
@property (assign,nonatomic) BOOL supportsAudioAndVideo;                                          //@synthesize supportsAudioAndVideo=_supportsAudioAndVideo - In the implementation block
@property (assign,nonatomic) BOOL supportsEmergency;                                              //@synthesize supportsEmergency=_supportsEmergency - In the implementation block
@property (assign,nonatomic) BOOL supportsVoicemail;                                              //@synthesize supportsVoicemail=_supportsVoicemail - In the implementation block
@property (assign,nonatomic) BOOL supportsRecents;                                                //@synthesize supportsRecents=_supportsRecents - In the implementation block
@property (assign,nonatomic) BOOL supportsCurrentPlatform;                                        //@synthesize supportsCurrentPlatform=_supportsCurrentPlatform - In the implementation block
@property (assign,nonatomic) unsigned audioSessionID;                                             //@synthesize audioSessionID=_audioSessionID - In the implementation block
@property (getter=isTelephonyProvider,nonatomic,readonly) BOOL telephonyProvider; 
@property (getter=isFaceTimeProvider,nonatomic,readonly) BOOL faceTimeProvider; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(NSString *)bundleIdentifier;
-(NSURL *)bundleURL;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(NSString *)localizedName;
-(id)bundle;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(unsigned)audioSessionID;
-(void)setAudioSessionID:(unsigned)arg1 ;
-(void)setLocalizedName:(NSString *)arg1 ;
-(BOOL)supportsAudioAndVideo;
-(void)setSupportsAudioOnly:(BOOL)arg1 ;
-(void)setSupportsEmergency:(BOOL)arg1 ;
-(void)setSupportsVoicemail:(BOOL)arg1 ;
-(void)setSupportsRecents:(BOOL)arg1 ;
-(void)setSupportedHandleTypes:(NSSet *)arg1 ;
-(void)setSupportsAudioAndVideo:(BOOL)arg1 ;
-(BOOL)isSystemProvider;
-(TUSandboxExtendedURL *)sandboxExtendedRingtoneSoundURL;
-(NSURL *)originalRingtoneSoundURL;
-(NSData *)iconTemplateImageData;
-(unsigned long long)maximumCallGroups;
-(unsigned long long)maximumCallsPerCallGroup;
-(BOOL)supportsEmergency;
-(BOOL)supportsVoicemail;
-(BOOL)supportsRecents;
-(BOOL)supportsCurrentPlatform;
-(NSSet *)supportedHandleTypes;
-(NSArray *)handoffIdentifiers;
-(NSArray *)emergencyLabeledHandles;
-(void)setSandboxExtendedRingtoneSoundURL:(TUSandboxExtendedURL *)arg1 ;
-(BOOL)isEqualToCallProvider:(id)arg1 ;
-(void)setBundleURL:(NSURL *)arg1 ;
-(void)setEmergencyLabeledHandles:(NSArray *)arg1 ;
-(void)setHandoffIdentifiers:(NSArray *)arg1 ;
-(void)setOriginalRingtoneSoundURL:(NSURL *)arg1 ;
-(void)setIconTemplateImageData:(NSData *)arg1 ;
-(void)setMaximumCallGroups:(unsigned long long)arg1 ;
-(void)setMaximumCallsPerCallGroup:(unsigned long long)arg1 ;
-(void)setSupportsCurrentPlatform:(BOOL)arg1 ;
-(BOOL)supportsHandleType:(long long)arg1 ;
-(BOOL)supportsShowingInCallUI;
-(BOOL)prefersShowingInCallUI;
-(BOOL)hasRestrictionsInRetailEnvironment;
-(id)displayAppBundleIdentifier;
-(id)inCallUIBundleIdentifier;
-(NSURL *)ringtoneSoundURL;
-(void)setRingtoneSoundURL:(NSURL *)arg1 ;
-(BOOL)supportsAudioOnly;
-(BOOL)isTelephonyProvider;
-(BOOL)isFaceTimeProvider;
@end

