/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface FBSDisplayIdentity : NSObject <BSXPCCoding, NSCopying, NSSecureCoding> {

	long long _type;
	unsigned _displayID;
	unsigned _connectionSeed;
	int _pid;
	BOOL _external;
	NSString* _uniqueIdentifier;
	BOOL _secure;
	FBSDisplayIdentity* _rootIdentity;

}

@property (nonatomic,readonly) unsigned displayID;                                  //@synthesize displayID=_displayID - In the implementation block
@property (nonatomic,readonly) unsigned connectionSeed;                             //@synthesize connectionSeed=_connectionSeed - In the implementation block
@property (getter=isSecure,nonatomic,readonly) BOOL secure;                         //@synthesize secure=_secure - In the implementation block
@property (nonatomic,readonly) int pid;                                             //@synthesize pid=_pid - In the implementation block
@property (nonatomic,copy,readonly) FBSDisplayIdentity * rootIdentity; 
@property (nonatomic,readonly) BOOL isRootIdentity; 
@property (getter=isMainDisplay,nonatomic,readonly) BOOL mainDisplay; 
@property (getter=isExternal,nonatomic,readonly) BOOL external;                     //@synthesize external=_external - In the implementation block
@property (getter=isCarDisplay,nonatomic,readonly) BOOL carDisplay; 
@property (getter=isTatlDisplay,nonatomic,readonly) BOOL tatlDisplay; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)_initWithType:(long long)arg1 displayID:(unsigned)arg2 connectionSeed:(unsigned)arg3 pid:(int)arg4 external:(BOOL)arg5 uniqueIdentifier:(id)arg6 secure:(BOOL)arg7 root:(id)arg8 ;
-(BOOL)isTatlDisplay;
-(BOOL)isRestrictedAirPlayDisplay;
-(BOOL)isiPodOnlyDisplay;
-(BOOL)isMusicOnlyDisplay;
-(unsigned)connectionSeed;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(BOOL)isMainDisplay;
-(FBSDisplayIdentity *)rootIdentity;
-(long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isCarDisplay;
-(BOOL)isSecure;
-(id)initWithXPCDictionary:(id)arg1 ;
-(BOOL)isExternal;
-(unsigned)displayID;
-(BOOL)expectsSecureRendering;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)uniqueIdentifier;
-(BOOL)isRootIdentity;
-(BOOL)isAirPlayDisplay;
-(int)pid;
@end

