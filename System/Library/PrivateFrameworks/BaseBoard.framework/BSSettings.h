/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol BSSettingDescriptionProvider;
@class NSMapTable, NSString;

@interface BSSettings : NSObject <NSCopying, NSMutableCopying, BSXPCCoding, NSSecureCoding, BSDescriptionProviding> {

	id<BSSettingDescriptionProvider> _descriptionProvider;
	NSMapTable* _settingToFlagMap;
	NSMapTable* _settingToObjectMap;

}

@property (assign,nonatomic,__weak) id<BSSettingDescriptionProvider> descriptionProvider;              //@synthesize descriptionProvider=_descriptionProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)enumerateFlagsWithBlock:(/*^block*/id)arg1 ;
-(void)enumerateObjectsWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateSettingsForFlagsWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateSettingsForObjectsWithBlock:(/*^block*/id)arg1 ;
-(id<BSSettingDescriptionProvider>)descriptionProvider;
-(void)setDescriptionProvider:(id<BSSettingDescriptionProvider>)arg1 ;
-(void)_applyToSettings:(id)arg1 ;
-(void)_setObject:(id)arg1 forSetting:(unsigned long long)arg2 ;
-(void)_removeAllSettings;
-(id)_valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 multilinePrefix:(id)arg4 ;
-(BOOL)isKeyedSettings;
-(id)_keyDescriptionForSetting:(unsigned long long)arg1 ;
-(void)_setFlag:(long long)arg1 forSetting:(unsigned long long)arg2 ;
-(void)_enumerateSettingsInMap:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)_newMapTable;
-(id)basicDescriptionWithPrefix:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)_init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(id)objectForSetting:(unsigned long long)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)allSettings;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(BOOL)boolForSetting:(unsigned long long)arg1 ;
-(long long)flagForSetting:(unsigned long long)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
@end

