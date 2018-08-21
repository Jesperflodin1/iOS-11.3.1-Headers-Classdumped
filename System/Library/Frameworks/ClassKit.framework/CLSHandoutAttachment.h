/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:55 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassKit/CLSObject.h>
#import <libobjc.A.dylib/CLSRelationable.h>

@class NSDate, NSString, NSURL, NSArray, CLSHandout;

@interface CLSHandoutAttachment : CLSObject <CLSRelationable> {

	BOOL _locked;
	int _type;
	int __completionStatus;
	int __shareType;
	int __permissionType;
	NSDate* __dateLastCompleted;
	NSString* _storeIdentifier;
	NSString* __title;
	NSURL* __URL;
	NSArray* __contextPath;
	NSString* __contentStoreIdentifier;
	long long __contextType;
	long long __displayOrder;
	NSString* __bundleIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isLocked,nonatomic) BOOL locked;                     //@synthesize locked=_locked - In the implementation block
@property (nonatomic,retain) NSDate * dateLastCompleted; 
@property (nonatomic,retain) NSDate * _dateLastCompleted;                     //@synthesize _dateLastCompleted=__dateLastCompleted - In the implementation block
@property (nonatomic,copy) NSString * storeIdentifier;                        //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,copy) NSString * _title;                                 //@synthesize _title=__title - In the implementation block
@property (nonatomic,copy) NSURL * _URL;                                      //@synthesize _URL=__URL - In the implementation block
@property (nonatomic,copy) NSArray * _contextPath;                            //@synthesize _contextPath=__contextPath - In the implementation block
@property (assign,nonatomic) int _completionStatus;                           //@synthesize _completionStatus=__completionStatus - In the implementation block
@property (nonatomic,retain) NSString * _contentStoreIdentifier;              //@synthesize _contentStoreIdentifier=__contentStoreIdentifier - In the implementation block
@property (assign,nonatomic) long long _contextType;                          //@synthesize _contextType=__contextType - In the implementation block
@property (assign,nonatomic) int _shareType;                                  //@synthesize _shareType=__shareType - In the implementation block
@property (assign,nonatomic) int _permissionType;                             //@synthesize _permissionType=__permissionType - In the implementation block
@property (assign,nonatomic) long long _displayOrder;                         //@synthesize _displayOrder=__displayOrder - In the implementation block
@property (nonatomic,copy) NSString * _bundleIdentifier;                      //@synthesize _bundleIdentifier=__bundleIdentifier - In the implementation block
@property (nonatomic,readonly) int type;                                      //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) int shareType; 
@property (assign,nonatomic) int permissionType; 
@property (assign,nonatomic) long long contextType; 
@property (assign,nonatomic) long long displayOrder; 
@property (nonatomic,copy) NSURL * URL; 
@property (nonatomic,readonly) NSArray * assets; 
@property (nonatomic,copy) NSArray * contextPath; 
@property (nonatomic,copy) NSString * bundleIdentifier; 
@property (nonatomic,retain) NSString * contentStoreIdentifier; 
@property (nonatomic,readonly) NSString * parentObjectID; 
@property (nonatomic,readonly) CLSHandout * parent; 
@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) int completionStatus; 
@property (getter=isComplete,nonatomic,readonly) BOOL complete; 
+(BOOL)supportsSecureCoding;
+(id)relations;
-(NSURL *)_URL;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)_init;
-(NSString *)bundleIdentifier;
-(NSString *)title;
-(int)type;
-(BOOL)isLocked;
-(NSString *)_title;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(void)setLocked:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(BOOL)isComplete;
-(long long)contextType;
-(int)completionStatus;
-(void)setCompletionStatus:(int)arg1 ;
-(long long)displayOrder;
-(NSArray *)assets;
-(void)setStoreIdentifier:(NSString *)arg1 ;
-(NSString *)storeIdentifier;
-(void)setDisplayOrder:(long long)arg1 ;
-(void)mergeWithObject:(id)arg1 ;
-(int)shareType;
-(void)addAsset:(id)arg1 ;
-(void)removeAsset:(id)arg1 ;
-(BOOL)validateObject:(id*)arg1 ;
-(void)set_title:(NSString *)arg1 ;
-(NSString *)contentStoreIdentifier;
-(void)setContextType:(long long)arg1 ;
-(void)setContentStoreIdentifier:(NSString *)arg1 ;
-(long long)_contextType;
-(NSString *)_bundleIdentifier;
-(NSString *)_contentStoreIdentifier;
-(int)_shareType;
-(void)set_shareType:(int)arg1 ;
-(int)_permissionType;
-(void)set_permissionType:(int)arg1 ;
-(void)set_URL:(NSURL *)arg1 ;
-(NSArray *)_contextPath;
-(void)set_contextPath:(NSArray *)arg1 ;
-(void)set_bundleIdentifier:(NSString *)arg1 ;
-(void)set_contentStoreIdentifier:(NSString *)arg1 ;
-(long long)_displayOrder;
-(void)set_displayOrder:(long long)arg1 ;
-(int)_completionStatus;
-(void)set_completionStatus:(int)arg1 ;
-(void)set_contextType:(long long)arg1 ;
-(NSDate *)_dateLastCompleted;
-(void)set_dateLastCompleted:(NSDate *)arg1 ;
-(void)setDateLastCompleted:(NSDate *)arg1 ;
-(NSArray *)contextPath;
-(id)initWithType:(int)arg1 title:(id)arg2 ;
-(void)setContextPath:(NSArray *)arg1 ;
-(NSDate *)dateLastCompleted;
-(void)setShareType:(int)arg1 ;
-(int)permissionType;
-(void)setPermissionType:(int)arg1 ;
@end

