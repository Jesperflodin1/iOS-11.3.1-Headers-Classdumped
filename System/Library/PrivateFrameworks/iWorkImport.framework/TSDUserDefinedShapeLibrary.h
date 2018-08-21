/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSDShapeSearchResultProviding.h>

@protocol OS_dispatch_queue;
@class NSObject, TSDShapeSearchIndex, NSCache, NSUserDefaults, NSDictionary, NSString;

@interface TSDUserDefinedShapeLibrary : NSObject <TSDShapeSearchResultProviding> {

	NSObject*<OS_dispatch_queue> _searchIndexQueue;
	BOOL _isWritingDefaultsDatabase;
	TSDShapeSearchIndex* _searchIndex;
	NSCache* _shapeCache;
	NSUserDefaults* _userDefaults;
	NSDictionary* _shadowDefaults;
	NSString* _lastWriterToken;
	NSString* _localWriterToken;

}

@property (nonatomic,retain) TSDShapeSearchIndex * p_searchIndex;               //@synthesize searchIndex=_searchIndex - In the implementation block
@property (nonatomic,retain) NSCache * p_shapeCache;                            //@synthesize shapeCache=_shapeCache - In the implementation block
@property (nonatomic,retain) NSUserDefaults * p_userDefaults;                   //@synthesize userDefaults=_userDefaults - In the implementation block
@property (nonatomic,retain) NSDictionary * p_shadowDefaults;                   //@synthesize shadowDefaults=_shadowDefaults - In the implementation block
@property (assign,nonatomic) BOOL p_isWritingDefaultsDatabase;                  //@synthesize isWritingDefaultsDatabase=_isWritingDefaultsDatabase - In the implementation block
@property (nonatomic,copy) NSString * p_localWriterToken;                       //@synthesize localWriterToken=_localWriterToken - In the implementation block
@property (nonatomic,copy) NSString * lastWriterToken;                          //@synthesize lastWriterToken=_lastWriterToken - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (readonly) unsigned long long numberOfUserDefinedShapes; 
@property (readonly) BOOL remoteWriteHappened; 
+(id)sharedLibrary;
-(TSDShapeSearchIndex *)p_searchIndex;
-(id)resultsForSearchTerm:(id)arg1 ;
-(id)shapeFromSearchResult:(id)arg1 ;
-(void)setP_searchIndex:(TSDShapeSearchIndex *)arg1 ;
-(unsigned long long)numberOfUserDefinedShapes;
-(id)userDefinedShapeAtIndex:(unsigned long long)arg1 ;
-(void)p_createSearchIndexWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)p_shadowPathSourceDefaults;
-(void)setLastWriterToken:(NSString *)arg1 ;
-(BOOL)remoteWriteHappened;
-(NSString *)lastWriterToken;
-(NSString *)p_localWriterToken;
-(void)p_addUserDefinedShapeWithPathSource:(id)arg1 atIndex:(unsigned long long)arg2 pathSourceDefaults:(id)arg3 withChangedIndexSet:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)p_setPathSourceDefaults:(id)arg1 ;
-(void)p_notifyForIndexesChanged:(id)arg1 changeType:(unsigned long long)arg2 documentRoot:(id)arg3 ;
-(void)p_updateIdentifierInSearchIndex:(id)arg1 fromUserDefinedName:(id)arg2 toUserDefinedName:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSCache *)p_shapeCache;
-(id)p_identifierAtIndex:(unsigned long long)arg1 ;
-(void)p_upgradeDefaultsIfNeeded;
-(NSUserDefaults *)p_userDefaults;
-(void)p_updateShadowDefaults;
-(NSDictionary *)p_shadowDefaults;
-(void)setP_shadowDefaults:(NSDictionary *)arg1 ;
-(void)p_upgradeDefaultsFromVersion:(unsigned long long)arg1 ;
-(id)p_pathSourceDefaults;
-(void)addUserDefinedShapesWithPathSources:(id)arg1 documentRoot:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)insertUserDefinedShapeWithPathSource:(id)arg1 atIndex:(unsigned long long)arg2 documentRoot:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)removeUserDefinedShapeAtIndex:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)updateShapeAtIndex:(unsigned long long)arg1 withName:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setP_shapeCache:(NSCache *)arg1 ;
-(void)setP_userDefaults:(NSUserDefaults *)arg1 ;
-(BOOL)p_isWritingDefaultsDatabase;
-(void)setP_isWritingDefaultsDatabase:(BOOL)arg1 ;
-(void)setP_localWriterToken:(NSString *)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)name;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

