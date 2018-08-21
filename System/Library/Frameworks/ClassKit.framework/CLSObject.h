/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:55 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLSRelationable.h>
#import <libobjc.A.dylib/CLSGraphVertex.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class CLSDataStore, NSObject, NSMutableDictionary, NSDate, NSString;

@interface CLSObject : NSObject <CLSRelationable, CLSGraphVertex, NSSecureCoding> {

	BOOL _deleted;
	BOOL _modified;
	CLSDataStore* _dataStore;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _childrenByID;
	CLSObject* _parent;
	BOOL _temporary;
	unsigned _generation;
	NSDate* _dateCreated;
	NSDate* _dateLastModified;
	NSString* __appIdentifier;
	NSString* _objectID;
	NSString* __parentObjectID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isTemporary,nonatomic) BOOL temporary;              //@synthesize temporary=_temporary - In the implementation block
@property (assign) unsigned generation;                                      //@synthesize generation=_generation - In the implementation block
@property (nonatomic,copy) NSString * appIdentifier; 
@property (nonatomic,copy) NSString * _appIdentifier;                        //@synthesize _appIdentifier=__appIdentifier - In the implementation block
@property (nonatomic,copy) NSString * objectID;                              //@synthesize objectID=_objectID - In the implementation block
@property (nonatomic,copy) NSString * parentObjectID; 
@property (nonatomic,copy) NSString * _parentObjectID;                       //@synthesize _parentObjectID=__parentObjectID - In the implementation block
@property (assign,nonatomic,__weak) CLSObject * parent; 
@property (assign,nonatomic,__weak) CLSDataStore * dataStore; 
@property (assign,getter=isDeleted,nonatomic) BOOL deleted; 
@property (assign,getter=isModified,nonatomic) BOOL modified; 
@property (nonatomic,retain) NSDate * dateCreated;                           //@synthesize dateCreated=_dateCreated - In the implementation block
@property (nonatomic,retain) NSDate * dateLastModified;                      //@synthesize dateLastModified=_dateLastModified - In the implementation block
@property (nonatomic,readonly) id vertexID; 
+(BOOL)supportsSecureCoding;
+(id)relations;
+(id)dateFormatter;
-(void)_addChild:(id)arg1 ;
-(void)setAppIdentifier:(NSString *)arg1 ;
-(NSString *)appIdentifier;
-(void)setDeleted:(BOOL)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)_init;
-(id)identity;
-(void)removeChild:(id)arg1 ;
-(id)dictionaryRepresentation;
-(CLSObject *)parent;
-(void)addChild:(id)arg1 ;
-(BOOL)isModified;
-(void)sync;
-(void)setModified:(BOOL)arg1 ;
-(id)ancestorOfClass:(Class)arg1 ;
-(id)childrenOfClass:(Class)arg1 ;
-(void)setGeneration:(unsigned)arg1 ;
-(NSDate *)dateCreated;
-(void)setDateCreated:(NSDate *)arg1 ;
-(NSString *)objectID;
-(BOOL)isDeleted;
-(void)setDataStore:(CLSDataStore *)arg1 ;
-(void)setObjectID:(NSString *)arg1 ;
-(unsigned)generation;
-(void)mergeWithObject:(id)arg1 ;
-(void)setParent:(CLSObject *)arg1 ;
-(CLSDataStore *)dataStore;
-(BOOL)isTemporary;
-(void)setTemporary:(BOOL)arg1 ;
-(BOOL)validateObject:(id*)arg1 ;
-(id)vertexID;
-(void)addChild:(id)arg1 changedPropertyName:(id)arg2 ;
-(void)removeChild:(id)arg1 changedPropertyName:(id)arg2 ;
-(NSString *)parentObjectID;
-(void)willSaveObject;
-(long long)effectiveAuthorizationStatus;
-(void)didSaveObject;
-(NSString *)_parentObjectID;
-(id)initWithDeletedObjectID:(id)arg1 ;
-(id)metaProperties;
-(id)childrenPassingTest:(/*^block*/id)arg1 ;
-(void)enumerateChildren:(/*^block*/id)arg1 ;
-(void)enumerateTree:(/*^block*/id)arg1 ;
-(void)setDateLastModified:(NSDate *)arg1 ;
-(NSDate *)dateLastModified;
-(void)setParentObjectID:(NSString *)arg1 ;
-(void)addMetaProperty:(id)arg1 ;
-(void)removeMetaProperty:(id)arg1 ;
-(NSString *)_appIdentifier;
-(void)set_appIdentifier:(NSString *)arg1 ;
-(void)set_parentObjectID:(NSString *)arg1 ;
@end
