/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:43 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary;

@interface WBSUserMediaCapturePolicyEntry : NSObject {

	double _permissionExpirationDate;
	double _permissionGrantDate;
	NSString* _origin;
	NSString* _topLevelOrigin;
	NSString* _persistentSalt;
	unsigned long long _permission;
	NSMutableDictionary* _ephemeralSalts;

}

@property (assign,nonatomic) double permissionExpirationDate;                   //@synthesize permissionExpirationDate=_permissionExpirationDate - In the implementation block
@property (assign,nonatomic) double permissionGrantDate;                        //@synthesize permissionGrantDate=_permissionGrantDate - In the implementation block
@property (nonatomic,retain) NSString * origin;                                 //@synthesize origin=_origin - In the implementation block
@property (nonatomic,retain) NSString * topLevelOrigin;                         //@synthesize topLevelOrigin=_topLevelOrigin - In the implementation block
@property (nonatomic,retain) NSString * persistentSalt;                         //@synthesize persistentSalt=_persistentSalt - In the implementation block
@property (assign,nonatomic) unsigned long long permission;                     //@synthesize permission=_permission - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * ephemeralSalts;              //@synthesize ephemeralSalts=_ephemeralSalts - In the implementation block
-(NSString *)origin;
-(BOOL)isValid;
-(void)setOrigin:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(void)setPersistentSalt:(NSString *)arg1 ;
-(unsigned long long)_defaultUserMediaPermission;
-(void)updatePermission:(unsigned long long)arg1 expirationPolicy:(unsigned long long)arg2 ;
-(id)initWithPermission:(unsigned long long)arg1 expirationPolicy:(unsigned long long)arg2 forOrigin:(id)arg3 topLevelOrigin:(id)arg4 ;
-(NSMutableDictionary *)ephemeralSalts;
-(NSString *)persistentSalt;
-(void)setEphemeralSalts:(NSMutableDictionary *)arg1 ;
-(double)permissionGrantDate;
-(NSString *)topLevelOrigin;
-(BOOL)permissionExpiresWithinOneDay;
-(BOOL)_isValidUserMediaPermission:(unsigned long long)arg1 ;
-(double)permissionExpirationDate;
-(void)setPermissionExpirationDate:(double)arg1 ;
-(void)setPermissionGrantDate:(double)arg1 ;
-(void)setTopLevelOrigin:(NSString *)arg1 ;
-(unsigned long long)permission;
-(void)setPermission:(unsigned long long)arg1 ;
@end

