/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:00 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSArray, NSString;

@interface TSKCOAddress : NSObject {

	NSArray* _allPathElements;
	TSKCOAddress* _parent;

}

@property (nonatomic,readonly) TSKCOAddress * parent;                  //@synthesize parent=_parent - In the implementation block
@property (nonatomic,readonly) NSString * path; 
@property (nonatomic,readonly) NSString * pathElement; 
@property (nonatomic,readonly) NSArray * allPathElements; 
+(void)registerClass:(Class)arg1 forExtensionNumber:(unsigned)arg2 ;
+(id)newObjectForUnarchiver:(id)arg1 message:(const Message*)arg2 ;
+(id)typeRegistry;
-(void)saveToArchiver:(id)arg1 message:(Address*)arg2 ;
-(BOOL)hasSamePrefix:(id)arg1 ;
-(id)initWithUnarchiver:(id)arg1 message:(const Address*)arg2 ;
-(NSString *)pathElement;
-(NSArray *)allPathElements;
-(BOOL)contains:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)path;
-(TSKCOAddress *)parent;
-(BOOL)equals:(id)arg1 ;
-(id)initWithParent:(id)arg1 ;
@end

