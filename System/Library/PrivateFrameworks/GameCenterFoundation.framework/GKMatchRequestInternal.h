/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:20 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSArray, NSString, NSDictionary, NSData;

@interface GKMatchRequestInternal : GKInternalRepresentation {

	unsigned long long _matchType;
	NSArray* _recipients;
	NSArray* _recipientPlayerIDs;
	NSString* _inviteMessage;
	NSDictionary* _localizableInviteMessage;
	NSData* _sessionToken;
	NSString* _rid;
	unsigned _version;
	BOOL _preloadedMatch;
	int _playerGroup;
	unsigned _playerAttributes;
	unsigned char _minPlayers;
	unsigned char _maxPlayers;
	unsigned char _defaultNumberOfPlayers;

}

@property (assign,nonatomic) unsigned char minPlayers;                                 //@synthesize minPlayers=_minPlayers - In the implementation block
@property (assign,nonatomic) unsigned char maxPlayers;                                 //@synthesize maxPlayers=_maxPlayers - In the implementation block
@property (assign,nonatomic) unsigned char defaultNumberOfPlayers;                     //@synthesize defaultNumberOfPlayers=_defaultNumberOfPlayers - In the implementation block
@property (assign,nonatomic) int playerGroup;                                          //@synthesize playerGroup=_playerGroup - In the implementation block
@property (assign,nonatomic) unsigned playerAttributes;                                //@synthesize playerAttributes=_playerAttributes - In the implementation block
@property (nonatomic,retain) NSArray * recipients;                                     //@synthesize recipients=_recipients - In the implementation block
@property (nonatomic,retain) NSArray * recipientPlayerIDs;                             //@synthesize recipientPlayerIDs=_recipientPlayerIDs - In the implementation block
@property (nonatomic,copy) NSString * inviteMessage;                                   //@synthesize inviteMessage=_inviteMessage - In the implementation block
@property (nonatomic,retain) NSDictionary * localizableInviteMessage;                  //@synthesize localizableInviteMessage=_localizableInviteMessage - In the implementation block
@property (assign,nonatomic) unsigned long long matchType;                             //@synthesize matchType=_matchType - In the implementation block
@property (nonatomic,retain) NSData * sessionToken;                                    //@synthesize sessionToken=_sessionToken - In the implementation block
@property (nonatomic,retain) NSString * rid;                                           //@synthesize rid=_rid - In the implementation block
@property (assign,nonatomic) unsigned version;                                         //@synthesize version=_version - In the implementation block
@property (assign,getter=isPreloadedMatch,nonatomic) BOOL preloadedMatch;              //@synthesize preloadedMatch=_preloadedMatch - In the implementation block
+(id)secureCodedPropertyKeys;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setVersion:(unsigned)arg1 ;
-(unsigned)version;
-(NSData *)sessionToken;
-(void)setSessionToken:(NSData *)arg1 ;
-(NSArray *)recipients;
-(void)setRecipients:(NSArray *)arg1 ;
-(int)playerGroup;
-(unsigned)playerAttributes;
-(unsigned char)minPlayers;
-(unsigned char)maxPlayers;
-(unsigned char)defaultNumberOfPlayers;
-(void)setMaxPlayers:(unsigned char)arg1 ;
-(void)setMinPlayers:(unsigned char)arg1 ;
-(void)setDefaultNumberOfPlayers:(unsigned char)arg1 ;
-(NSArray *)recipientPlayerIDs;
-(void)setRecipientPlayerIDs:(NSArray *)arg1 ;
-(void)setRid:(NSString *)arg1 ;
-(void)setPlayerGroup:(int)arg1 ;
-(void)setPlayerAttributes:(unsigned)arg1 ;
-(NSString *)rid;
-(void)setInviteMessage:(NSString *)arg1 ;
-(NSDictionary *)localizableInviteMessage;
-(BOOL)isPreloadedMatch;
-(BOOL)hasGuestPlayers;
-(void)setLocalizableInviteMessage:(NSDictionary *)arg1 ;
-(void)setPreloadedMatch:(BOOL)arg1 ;
-(void)setMatchType:(unsigned long long)arg1 ;
-(unsigned long long)matchType;
-(NSString *)inviteMessage;
@end

