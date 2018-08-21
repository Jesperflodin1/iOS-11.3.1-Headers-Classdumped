/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class BRFieldCKInfo, BRCItemID, NSString, NSData, BRMangledID;

@interface BRCStatInfo : NSObject <NSCopying, NSSecureCoding> {

	BRFieldCKInfo* _ckInfo;
	BRCItemID* _parentID;
	char _state;
	char _type;
	char _mode;
	long long _birthtime;
	long long _lastUsedTime;
	long long _favoriteRank;
	NSString* _logicalName;
	NSString* _aliasTarget;
	BOOL _hiddenExt;
	NSData* _xattrSignature;
	NSData* _lazyXattr;
	NSData* _finderTags;
	NSString* _trashPutBackPath;
	BRCItemID* _trashPutBackParentID;

}

@property (nonatomic,retain) BRFieldCKInfo * ckInfo;                             //@synthesize ckInfo=_ckInfo - In the implementation block
@property (nonatomic,retain) BRCItemID * parentID;                               //@synthesize parentID=_parentID - In the implementation block
@property (assign,nonatomic) char state;                                         //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) char type;                                          //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) char mode;                                          //@synthesize mode=_mode - In the implementation block
@property (nonatomic,retain) NSString * logicalName;                             //@synthesize logicalName=_logicalName - In the implementation block
@property (assign,nonatomic) long long birthtime;                                //@synthesize birthtime=_birthtime - In the implementation block
@property (assign,nonatomic) long long lastUsedTime;                             //@synthesize lastUsedTime=_lastUsedTime - In the implementation block
@property (assign,nonatomic) long long favoriteRank;                             //@synthesize favoriteRank=_favoriteRank - In the implementation block
@property (assign,getter=isHiddenExt,nonatomic) BOOL hiddenExt;                  //@synthesize hiddenExt=_hiddenExt - In the implementation block
@property (nonatomic,retain) NSData * finderTags;                                //@synthesize finderTags=_finderTags - In the implementation block
@property (nonatomic,retain) NSData * xattrSignature;                            //@synthesize xattrSignature=_xattrSignature - In the implementation block
@property (nonatomic,readonly) NSString * representableName; 
@property (nonatomic,readonly) BRMangledID * _aliasTargetMangledID; 
@property (nonatomic,readonly) NSString * aliasTarget;                           //@synthesize aliasTarget=_aliasTarget - In the implementation block
@property (nonatomic,retain) NSData * lazyXattr;                                 //@synthesize lazyXattr=_lazyXattr - In the implementation block
@property (nonatomic,readonly) BOOL iWorkShareable; 
@property (nonatomic,retain) NSString * trashPutBackPath;                        //@synthesize trashPutBackPath=_trashPutBackPath - In the implementation block
@property (nonatomic,retain) BRCItemID * trashPutBackParentID;                   //@synthesize trashPutBackParentID=_trashPutBackParentID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(char)state;
-(void)setState:(char)arg1 ;
-(void)setType:(char)arg1 ;
-(char)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)mode;
-(void)setMode:(char)arg1 ;
-(id)displayName;
-(BOOL)isWritable;
-(BRCItemID *)parentID;
-(void)setParentID:(BRCItemID *)arg1 ;
-(NSString *)logicalName;
-(NSData *)finderTags;
-(long long)birthtime;
-(long long)favoriteRank;
-(BOOL)isHiddenExt;
-(unsigned long long)diffAgainst:(id)arg1 ;
-(BRFieldCKInfo *)ckInfo;
-(void)setCkInfo:(BRFieldCKInfo *)arg1 ;
-(BRMangledID *)_aliasTargetMangledID;
-(id)_aliasTargetItemID;
-(void)_updateAliasTarget:(id)arg1 ;
-(NSData *)xattrSignature;
-(NSString *)trashPutBackPath;
-(BRCItemID *)trashPutBackParentID;
-(NSString *)aliasTarget;
-(id)descriptionWithContext:(id)arg1 origName:(id)arg2 ;
-(BOOL)checkStateWithItemID:(id)arg1 logToFile:(_sFILE*)arg2 ;
-(id)initWithStatInfo:(id)arg1 ;
-(NSString *)representableName;
-(BOOL)iWorkShareable;
-(id)initFromResultSet:(id)arg1 pos:(int)arg2 ;
-(BOOL)check:(id)arg1 logToFile:(_sFILE*)arg2 ;
-(BOOL)isExecutable;
-(BOOL)isEtagEqual:(id)arg1 ;
-(void)setBirthtime:(long long)arg1 ;
-(void)setFavoriteRank:(long long)arg1 ;
-(void)setHiddenExt:(BOOL)arg1 ;
-(void)setXattrSignature:(NSData *)arg1 ;
-(NSData *)lazyXattr;
-(void)setLazyXattr:(NSData *)arg1 ;
-(void)setFinderTags:(NSData *)arg1 ;
-(void)setLogicalName:(NSString *)arg1 ;
-(void)setTrashPutBackPath:(NSString *)arg1 ;
-(void)setTrashPutBackParentID:(BRCItemID *)arg1 ;
-(long long)lastUsedTime;
-(void)setLastUsedTime:(long long)arg1 ;
@end

