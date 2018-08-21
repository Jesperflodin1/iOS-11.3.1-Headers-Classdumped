/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface PKKeychainItemWrapper : NSObject {

	NSMutableDictionary* keychainItemData;
	NSMutableDictionary* genericPasswordQuery;
	unsigned long long type;

}

@property (assign,nonatomic) unsigned long long type; 
@property (nonatomic,retain) NSMutableDictionary * keychainItemData; 
@property (nonatomic,retain) NSMutableDictionary * genericPasswordQuery; 
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(id)initWithIdentifier:(id)arg1 accessGroup:(id)arg2 serviceName:(id)arg3 type:(unsigned long long)arg4 ;
-(void)resetKeychainItem;
-(void)applySynchronizableValueToDictionary:(id)arg1 ;
-(id)secItemFormatToDictionary:(id)arg1 ;
-(void)setKeychainItemData:(NSMutableDictionary *)arg1 ;
-(void)writeToKeychain;
-(id)dictionaryToSecItemFormat:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 accessGroup:(id)arg2 serviceName:(id)arg3 ;
-(NSMutableDictionary *)keychainItemData;
-(NSMutableDictionary *)genericPasswordQuery;
-(void)setGenericPasswordQuery:(NSMutableDictionary *)arg1 ;
@end

