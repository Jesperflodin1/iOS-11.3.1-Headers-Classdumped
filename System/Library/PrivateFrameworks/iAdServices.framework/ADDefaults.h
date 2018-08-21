/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iAdServices.framework/iAdServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iAdServices/iAdServices-Structs.h>
@class NSMutableDictionary;

@interface ADDefaults : NSObject {

	NSMutableDictionary* _factoryDefaults;
	CFStringRef _defaultsBundleID;

}

@property (nonatomic,retain) NSMutableDictionary * factoryDefaults;              //@synthesize factoryDefaults=_factoryDefaults - In the implementation block
@property (assign,nonatomic) CFStringRef defaultsBundleID;                       //@synthesize defaultsBundleID=_defaultsBundleID - In the implementation block
+(void)setArray:(id)arg1 forKey:(id)arg2 ;
+(id)sharedInstance;
+(BOOL)boolForKey:(id)arg1 ;
+(id)stringForKey:(id)arg1 ;
+(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
+(long long)integerForKey:(id)arg1 ;
+(void)setString:(id)arg1 forKey:(id)arg2 ;
+(void)setInteger:(long long)arg1 forKey:(id)arg2 ;
+(id)arrayForKey:(id)arg1 ;
+(id)_defaultValueForKey:(id)arg1 valueClass:(Class)arg2 ;
+(void)_setDefaultValue:(id)arg1 forKey:(id)arg2 ;
+(void)addFactoryDefaults:(id)arg1 ;
+(id)factoryDefaults;
+(BOOL)defaultIsSetForKey:(id)arg1 ;
+(double)doubleForKey:(id)arg1 ;
+(void)setDouble:(double)arg1 forKey:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(CFStringRef)defaultsBundleID;
-(NSMutableDictionary *)factoryDefaults;
-(void)setFactoryDefaults:(NSMutableDictionary *)arg1 ;
-(void)setDefaultsBundleID:(CFStringRef)arg1 ;
@end
