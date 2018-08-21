/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:53 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VisualVoicemail/VisualVoicemail-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface VMVoicemailCapabilities : NSObject <NSCopying, NSSecureCoding> {

	BOOL _canChangeGreeting;
	BOOL _canChangePassword;
	BOOL _mailboxRequiresSetup;
	BOOL _transcriptionEnabled;
	long long _mailboxGreetingState;
	double _maximumGreetingDuration;
	unsigned long long _minimumPasswordLength;
	unsigned long long _maximumPasswordLength;

}

@property (nonatomic,readonly) BOOL canChangeGreeting;                                               //@synthesize canChangeGreeting=_canChangeGreeting - In the implementation block
@property (nonatomic,readonly) BOOL canChangePassword;                                               //@synthesize canChangePassword=_canChangePassword - In the implementation block
@property (nonatomic,readonly) BOOL mailboxRequiresSetup;                                            //@synthesize mailboxRequiresSetup=_mailboxRequiresSetup - In the implementation block
@property (nonatomic,readonly) long long mailboxGreetingState;                                       //@synthesize mailboxGreetingState=_mailboxGreetingState - In the implementation block
@property (nonatomic,readonly) double maximumGreetingDuration;                                       //@synthesize maximumGreetingDuration=_maximumGreetingDuration - In the implementation block
@property (nonatomic,readonly) unsigned long long minimumPasswordLength;                             //@synthesize minimumPasswordLength=_minimumPasswordLength - In the implementation block
@property (nonatomic,readonly) unsigned long long maximumPasswordLength;                             //@synthesize maximumPasswordLength=_maximumPasswordLength - In the implementation block
@property (getter=isTranscriptionEnabled,nonatomic,readonly) BOOL transcriptionEnabled;              //@synthesize transcriptionEnabled=_transcriptionEnabled - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCapabilities:(id)arg1 ;
-(BOOL)isEqualToCapabilities:(id)arg1 ;
-(BOOL)mailboxRequiresSetup;
-(double)maximumGreetingDuration;
-(unsigned long long)minimumPasswordLength;
-(unsigned long long)maximumPasswordLength;
-(BOOL)canChangePassword;
-(BOOL)canChangeGreeting;
-(long long)mailboxGreetingState;
-(BOOL)isTranscriptionEnabled;
-(id)initWithCanChangeGreeting:(BOOL)arg1 canChangePassword:(BOOL)arg2 mailboxRequiresSetup:(BOOL)arg3 mailboxGreetingState:(long long)arg4 maximumGreetingDuration:(double)arg5 minimumPasswordLength:(unsigned long long)arg6 maximumPasswordLength:(unsigned long long)arg7 transcriptionEnabled:(BOOL)arg8 ;
@end
