/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:33 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSIndexPath, NSUUID;

@interface UICollectionViewUpdateItem : NSObject <NSCopying> {

	NSIndexPath* _initialIndexPath;
	NSIndexPath* _finalIndexPath;
	long long _updateAction;
	BOOL _isAppendingSectionInsert;
	NSUUID* _identifier;

}

@property (getter=_action,nonatomic,readonly) long long action; 
@property (getter=_indexPath,nonatomic,readonly) NSIndexPath * indexPath; 
@property (nonatomic,retain) NSUUID * identifier;                                                                   //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL isAppendingSectionInsert;                                                         //@synthesize isAppendingSectionInsert=_isAppendingSectionInsert - In the implementation block
@property (getter=_isSectionOperation,nonatomic,readonly) BOOL isSectionOperation; 
@property (setter=_setNewIndexPath:,getter=_newIndexPath,nonatomic,retain) NSIndexPath * newIndexPath; 
@property (nonatomic,readonly) NSIndexPath * indexPathBeforeUpdate;                                                 //@synthesize initialIndexPath=_initialIndexPath - In the implementation block
@property (nonatomic,readonly) NSIndexPath * indexPathAfterUpdate;                                                  //@synthesize finalIndexPath=_finalIndexPath - In the implementation block
@property (nonatomic,readonly) long long updateAction;                                                              //@synthesize updateAction=_updateAction - In the implementation block
-(id)description;
-(NSUUID *)identifier;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)inverseCompareIndexPaths:(id)arg1 ;
-(long long)compareIndexPaths:(id)arg1 ;
-(id)_indexPath;
-(id)initWithOldIndexPath:(id)arg1 newIndexPath:(id)arg2 ;
-(long long)updateAction;
-(BOOL)_isSectionOperation;
-(long long)_action;
-(void)setIsAppendingSectionInsert:(BOOL)arg1 ;
-(BOOL)isNOOP;
-(id)revertedUpdate;
-(NSIndexPath *)indexPathBeforeUpdate;
-(NSIndexPath *)indexPathAfterUpdate;
-(id)initWithInitialIndexPath:(id)arg1 finalIndexPath:(id)arg2 updateAction:(long long)arg3 ;
-(BOOL)isAppendingSectionInsert;
-(id)initWithAction:(long long)arg1 forIndexPath:(id)arg2 ;
-(id)_newIndexPath;
-(void)_setNewIndexPath:(id)arg1 ;
-(BOOL)isEqualToUpdate:(id)arg1 ;
-(BOOL)isRevertedUpdateOf:(id)arg1 ;
@end
