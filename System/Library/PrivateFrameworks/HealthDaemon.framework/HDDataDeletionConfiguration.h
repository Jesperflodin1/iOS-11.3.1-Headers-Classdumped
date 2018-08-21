/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, HDSQLitePredicate;

@interface HDDataDeletionConfiguration : NSObject <NSSecureCoding, NSCopying> {

	BOOL _generateDeletedObjects;
	BOOL _failIfNotFound;
	BOOL _notifyObservers;
	BOOL _secureDelete;
	/*^block*/id _recursiveDeleteAuthorizationBlock;
	NSString* _restrictedSourceBundleIdentifier;
	HDSQLitePredicate* _predicate;
	Class _entityClass;

}

@property (assign,nonatomic) BOOL generateDeletedObjects;                            //@synthesize generateDeletedObjects=_generateDeletedObjects - In the implementation block
@property (assign,nonatomic) BOOL failIfNotFound;                                    //@synthesize failIfNotFound=_failIfNotFound - In the implementation block
@property (assign,nonatomic) BOOL notifyObservers;                                   //@synthesize notifyObservers=_notifyObservers - In the implementation block
@property (assign,nonatomic) BOOL secureDelete;                                      //@synthesize secureDelete=_secureDelete - In the implementation block
@property (nonatomic,copy) id recursiveDeleteAuthorizationBlock;                     //@synthesize recursiveDeleteAuthorizationBlock=_recursiveDeleteAuthorizationBlock - In the implementation block
@property (nonatomic,copy) NSString * restrictedSourceBundleIdentifier;              //@synthesize restrictedSourceBundleIdentifier=_restrictedSourceBundleIdentifier - In the implementation block
@property (nonatomic,copy) HDSQLitePredicate * predicate;                            //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,copy) Class entityClass;                                        //@synthesize entityClass=_entityClass - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPredicate:(HDSQLitePredicate *)arg1 ;
-(HDSQLitePredicate *)predicate;
-(void)setEntityClass:(Class)arg1 ;
-(Class)entityClass;
-(void)setRecursiveDeleteAuthorizationBlock:(id)arg1 ;
-(void)setNotifyObservers:(BOOL)arg1 ;
-(id)recursiveDeleteAuthorizationBlock;
-(BOOL)secureDelete;
-(NSString *)restrictedSourceBundleIdentifier;
-(BOOL)generateDeletedObjects;
-(BOOL)failIfNotFound;
-(BOOL)notifyObservers;
-(void)setGenerateDeletedObjects:(BOOL)arg1 ;
-(void)setFailIfNotFound:(BOOL)arg1 ;
-(void)setSecureDelete:(BOOL)arg1 ;
-(void)setRestrictedSourceBundleIdentifier:(NSString *)arg1 ;
@end
