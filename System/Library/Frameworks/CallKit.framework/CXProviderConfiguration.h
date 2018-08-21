/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:54 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallKit/CallKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/CXCopying.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NSSet, NSArray, NSURL;

@interface CXProviderConfiguration : NSObject <NSSecureCoding, CXCopying, NSCopying> {

	BOOL _includesCallsInRecents;
	BOOL _supportsVideo;
	BOOL _supportsAudioOnly;
	BOOL _supportsEmergency;
	BOOL _supportsVoicemail;
	BOOL _supportsCurrentPlatform;
	unsigned _audioSessionID;
	NSString* _localizedName;
	NSData* _iconTemplateImageData;
	unsigned long long _maximumCallGroups;
	unsigned long long _maximumCallsPerCallGroup;
	NSSet* _supportedHandleTypes;
	NSArray* _emergencyHandles;
	NSArray* _emergencyLabeledHandles;
	NSArray* _handoffIdentifiers;
	NSURL* _ringtoneSoundURL;

}

@property (nonatomic,copy) NSString * localizedName;                                   //@synthesize localizedName=_localizedName - In the implementation block
@property (assign,nonatomic) unsigned audioSessionID;                                  //@synthesize audioSessionID=_audioSessionID - In the implementation block
@property (nonatomic,copy) NSArray * emergencyHandles;                                 //@synthesize emergencyHandles=_emergencyHandles - In the implementation block
@property (nonatomic,copy) NSArray * emergencyLabeledHandles;                          //@synthesize emergencyLabeledHandles=_emergencyLabeledHandles - In the implementation block
@property (nonatomic,copy) NSArray * handoffIdentifiers;                               //@synthesize handoffIdentifiers=_handoffIdentifiers - In the implementation block
@property (nonatomic,copy) NSURL * ringtoneSoundURL;                                   //@synthesize ringtoneSoundURL=_ringtoneSoundURL - In the implementation block
@property (assign,nonatomic) BOOL supportsAudioOnly;                                   //@synthesize supportsAudioOnly=_supportsAudioOnly - In the implementation block
@property (assign,nonatomic) BOOL supportsEmergency;                                   //@synthesize supportsEmergency=_supportsEmergency - In the implementation block
@property (assign,nonatomic) BOOL supportsVoicemail;                                   //@synthesize supportsVoicemail=_supportsVoicemail - In the implementation block
@property (assign,nonatomic) BOOL supportsCurrentPlatform;                             //@synthesize supportsCurrentPlatform=_supportsCurrentPlatform - In the implementation block
@property (nonatomic,retain) NSString * ringtoneSound; 
@property (nonatomic,copy) NSData * iconTemplateImageData;                             //@synthesize iconTemplateImageData=_iconTemplateImageData - In the implementation block
@property (assign,nonatomic) unsigned long long maximumCallGroups;                     //@synthesize maximumCallGroups=_maximumCallGroups - In the implementation block
@property (assign,nonatomic) unsigned long long maximumCallsPerCallGroup;              //@synthesize maximumCallsPerCallGroup=_maximumCallsPerCallGroup - In the implementation block
@property (assign,nonatomic) BOOL includesCallsInRecents;                              //@synthesize includesCallsInRecents=_includesCallsInRecents - In the implementation block
@property (assign,nonatomic) BOOL supportsVideo;                                       //@synthesize supportsVideo=_supportsVideo - In the implementation block
@property (nonatomic,copy) NSSet * supportedHandleTypes;                               //@synthesize supportedHandleTypes=_supportedHandleTypes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)localizedName;
-(unsigned)audioSessionID;
-(void)setAudioSessionID:(unsigned)arg1 ;
-(BOOL)supportsVideo;
-(void)setLocalizedName:(NSString *)arg1 ;
-(void)setSupportsAudioOnly:(BOOL)arg1 ;
-(void)setSupportsEmergency:(BOOL)arg1 ;
-(void)setSupportsVoicemail:(BOOL)arg1 ;
-(void)setSupportedHandleTypes:(NSSet *)arg1 ;
-(NSData *)iconTemplateImageData;
-(unsigned long long)maximumCallGroups;
-(unsigned long long)maximumCallsPerCallGroup;
-(BOOL)supportsEmergency;
-(BOOL)supportsVoicemail;
-(BOOL)supportsCurrentPlatform;
-(NSSet *)supportedHandleTypes;
-(NSArray *)handoffIdentifiers;
-(NSArray *)emergencyLabeledHandles;
-(void)setEmergencyLabeledHandles:(NSArray *)arg1 ;
-(void)setHandoffIdentifiers:(NSArray *)arg1 ;
-(void)setIconTemplateImageData:(NSData *)arg1 ;
-(void)setMaximumCallGroups:(unsigned long long)arg1 ;
-(void)setMaximumCallsPerCallGroup:(unsigned long long)arg1 ;
-(void)setSupportsCurrentPlatform:(BOOL)arg1 ;
-(NSURL *)ringtoneSoundURL;
-(void)setRingtoneSoundURL:(NSURL *)arg1 ;
-(void)updateCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(id)sanitizedCopyWithZone:(NSZone*)arg1 ;
-(void)updateSanitizedCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(id)sanitizedCopy;
-(BOOL)includesCallsInRecents;
-(NSArray *)emergencyHandles;
-(void)setSupportsVideo:(BOOL)arg1 ;
-(void)setIncludesCallsInRecents:(BOOL)arg1 ;
-(id)initWithLocalizedName:(id)arg1 ;
-(void)setEmergencyHandles:(NSArray *)arg1 ;
-(NSString *)ringtoneSound;
-(void)setRingtoneSound:(NSString *)arg1 ;
-(BOOL)supportsAudioOnly;
@end

