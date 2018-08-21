/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSXPCCoding.h>

@protocol BSSettingDescriptionProvider;
@class BSMutableSettings, NSHashTable, NSString;

@interface BSSettingsDiff : NSObject <NSCopying, BSXPCCoding> {

	id<BSSettingDescriptionProvider> _descriptionProvider;
	BSMutableSettings* _changes;
	NSHashTable* _flagRemovals;
	NSHashTable* _objectRemovals;

}

@property (nonatomic,readonly) BOOL isEmpty; 
@property (assign,nonatomic,__weak) id<BSSettingDescriptionProvider> descriptionProvider;              //@synthesize descriptionProvider=_descriptionProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_newHashTableWithInitialCapacity:(unsigned long long)arg1 ;
+(id)diffFromSettings:(id)arg1 toSettings:(id)arg2 ;
-(id)_initWithChanges:(id)arg1 flagRemovals:(id)arg2 objectRemovals:(id)arg3 ;
-(void)_enumerateSettingsInTable:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(unsigned long long)_diffTypesForSetting:(unsigned long long)arg1 ;
-(void)applyToSettings:(id)arg1 ;
-(void)inspectChangesWithBlock:(/*^block*/id)arg1 ;
-(id<BSSettingDescriptionProvider>)descriptionProvider;
-(void)setDescriptionProvider:(id<BSSettingDescriptionProvider>)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)allSettings;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
@end

