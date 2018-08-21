//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class CDPContext, CDPRecoveryController, CDPRemoteDeviceSecretValidator, FMIPButton, FMIPDevice, NSArray, NSData, NSDictionary, NSString;

@interface FMIPCommandContext : NSObject <NSCopying>
{
    _Bool _userText;
    _Bool _sound;
    _Bool _lostModeEnabled;
    _Bool _trackingEnabled;
    _Bool _emailUpdates;
    _Bool _didUserConfirmSafetyWarning;
    _Bool _recoveryUIDisplayed;
    long long _operation;
    FMIPDevice *_device;
    FMIPButton *_sourceButton;
    NSString *_ownerNumber;
    NSString *_message;
    NSString *_passcode;
    NSString *_title;
    NSString *_text;
    NSString *_oneTimeAuthToken;
    NSString *_fmipEscrowUUID;
    NSData *_recoverySessionId;
    NSDictionary *_authenticationResults;
    NSArray *_channels;
    NSString *_commandReason;
    long long _accountSecurityClass;
    unsigned long long _totalNumberOfSteps;
    unsigned long long _currentStep;
    CDPContext *_cdpContext;
    CDPRecoveryController *_recoveryController;
    NSArray *_recoveryDevices;
    CDPRemoteDeviceSecretValidator *_remoteDeviceSecretValidator;
}

+ (id)commandContextForDevice:(id)arg1 operation:(long long)arg2;
@property(nonatomic) _Bool recoveryUIDisplayed; // @synthesize recoveryUIDisplayed=_recoveryUIDisplayed;
@property(retain, nonatomic) CDPRemoteDeviceSecretValidator *remoteDeviceSecretValidator; // @synthesize remoteDeviceSecretValidator=_remoteDeviceSecretValidator;
@property(retain, nonatomic) NSArray *recoveryDevices; // @synthesize recoveryDevices=_recoveryDevices;
@property(retain, nonatomic) CDPRecoveryController *recoveryController; // @synthesize recoveryController=_recoveryController;
@property(retain, nonatomic) CDPContext *cdpContext; // @synthesize cdpContext=_cdpContext;
@property(nonatomic) unsigned long long currentStep; // @synthesize currentStep=_currentStep;
@property(nonatomic) unsigned long long totalNumberOfSteps; // @synthesize totalNumberOfSteps=_totalNumberOfSteps;
@property(nonatomic) long long accountSecurityClass; // @synthesize accountSecurityClass=_accountSecurityClass;
@property(nonatomic) _Bool didUserConfirmSafetyWarning; // @synthesize didUserConfirmSafetyWarning=_didUserConfirmSafetyWarning;
@property(nonatomic) _Bool emailUpdates; // @synthesize emailUpdates=_emailUpdates;
@property(nonatomic) _Bool trackingEnabled; // @synthesize trackingEnabled=_trackingEnabled;
@property(nonatomic) _Bool lostModeEnabled; // @synthesize lostModeEnabled=_lostModeEnabled;
@property(nonatomic) _Bool sound; // @synthesize sound=_sound;
@property(retain, nonatomic) NSString *commandReason; // @synthesize commandReason=_commandReason;
@property(retain, nonatomic) NSArray *channels; // @synthesize channels=_channels;
@property(retain, nonatomic) NSDictionary *authenticationResults; // @synthesize authenticationResults=_authenticationResults;
@property(retain, nonatomic) NSData *recoverySessionId; // @synthesize recoverySessionId=_recoverySessionId;
@property(retain, nonatomic) NSString *fmipEscrowUUID; // @synthesize fmipEscrowUUID=_fmipEscrowUUID;
@property(retain, nonatomic) NSString *oneTimeAuthToken; // @synthesize oneTimeAuthToken=_oneTimeAuthToken;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *passcode; // @synthesize passcode=_passcode;
@property(nonatomic) _Bool userText; // @synthesize userText=_userText;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *ownerNumber; // @synthesize ownerNumber=_ownerNumber;
@property(nonatomic) __weak FMIPButton *sourceButton; // @synthesize sourceButton=_sourceButton;
@property(retain, nonatomic) FMIPDevice *device; // @synthesize device=_device;
@property(nonatomic) long long operation; // @synthesize operation=_operation;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDevice:(id)arg1 operation:(long long)arg2;
- (id)init;

@end
