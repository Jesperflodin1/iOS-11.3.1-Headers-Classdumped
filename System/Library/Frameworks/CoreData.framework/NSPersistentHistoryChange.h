/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:06 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSManagedObjectID, NSDictionary, NSPersistentHistoryTransaction, NSSet;

@interface NSPersistentHistoryChange : NSObject <NSCopying>

@property (readonly) long long changeID; 
@property (copy,readonly) NSManagedObjectID * changedObjectID; 
@property (readonly) long long changeType; 
@property (copy,readonly) NSDictionary * tombstone; 
@property (readonly) NSPersistentHistoryTransaction * transaction; 
@property (copy,readonly) NSSet * updatedProperties; 
+(BOOL)supportsSecureCoding;
-(NSManagedObjectID *)changedObjectID;
-(NSSet *)updatedProperties;
-(NSDictionary *)tombstone;
-(NSPersistentHistoryTransaction *)transaction;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)changeType;
-(long long)changeID;
@end

