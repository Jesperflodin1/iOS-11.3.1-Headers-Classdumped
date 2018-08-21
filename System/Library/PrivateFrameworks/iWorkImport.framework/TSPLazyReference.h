/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:48 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol TSPLazyReferenceDelegate;
@class TSPObject, TSPComponent, NSUUID;

@interface TSPLazyReference : NSObject <NSCopying> {

	TSPObject* _strongObject;
	TSPObject* _weakObject;
	struct {
		unsigned ownershipMode : 2;
		unsigned isExternal : 1;
		unsigned allowUnknownObject : 1;
	}  _flags;
	id<TSPLazyReferenceDelegate> _delegate;
	long long _identifier;
	TSPComponent* _component;
	Class _objectClass;

}

@property (assign,nonatomic,__weak) id<TSPLazyReferenceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSUUID * objectUUID; 
@property (assign,nonatomic,__weak) TSPComponent * component;                           //@synthesize component=_component - In the implementation block
@property (nonatomic,readonly) TSPObject * weakObject; 
@property (nonatomic,retain) TSPObject * strongObject; 
@property (nonatomic,readonly) long long ownershipMode; 
@property (assign,nonatomic) BOOL isExternal; 
@property (assign,nonatomic) Class objectClass;                                         //@synthesize objectClass=_objectClass - In the implementation block
@property (nonatomic,readonly) id object; 
@property (nonatomic,readonly) id objectIfLoaded; 
+(id)weakReferenceForObject:(id)arg1 retainedUntilArchived:(BOOL)arg2 ;
+(id)weakReferenceForObject:(id)arg1 ;
+(id)referenceForObject:(id)arg1 ;
-(long long)ownershipMode;
-(id)initWithDelegate:(id)arg1 identifier:(long long)arg2 ownershipMode:(long long)arg3 allowUnknownObject:(BOOL)arg4 ;
-(id)initWeakReferenceWithObject:(id)arg1 retainedUntilArchived:(BOOL)arg2 ;
-(id)initWithObject:(id)arg1 ownershipMode:(long long)arg2 ;
-(void)resetToIdentifier:(long long)arg1 ;
-(id)initWeakReferenceWithObject:(id)arg1 ;
-(void)addLoadObserver:(id)arg1 action:(SEL)arg2 ;
-(void)resetIdentifierFromCopy:(BOOL)arg1 ;
-(TSPComponent *)component;
-(void)setComponent:(TSPComponent *)arg1 ;
-(id)init;
-(id<TSPLazyReferenceDelegate>)delegate;
-(void)setDelegate:(id<TSPLazyReferenceDelegate>)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)identifier;
-(id)object;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isExternal;
-(id)initWithObject:(id)arg1 ;
-(Class)objectClass;
-(id)additionalDescription;
-(void)setObjectClass:(Class)arg1 ;
-(NSUUID *)objectUUID;
-(TSPObject *)weakObject;
-(BOOL)isEqualToLazyReference:(id)arg1 ;
-(id)objectIfLoaded;
-(BOOL)referencesObject:(id)arg1 ;
-(TSPObject *)strongObject;
-(void)setStrongObject:(TSPObject *)arg1 ;
-(BOOL)discardStrongObjectIfPossible;
-(void)setIsExternal:(BOOL)arg1 ;
@end

