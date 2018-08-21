/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:10 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSString, NSObject;

@interface TSWPStorageRangeProvider : NSObject {

	NSString* _identifier;
	NSRange _range;
	NSObject* _object;

}

@property (assign,nonatomic) NSRange range;                        //@synthesize range=_range - In the implementation block
@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSObject * object;                  //@synthesize object=_object - In the implementation block
-(unsigned long long)rangeLength;
-(void)nextRange;
-(unsigned long long)rangeStart;
-(unsigned long long)rangeEnd;
-(NSString *)identifier;
-(NSObject *)object;
-(id)initWithIdentifier:(id)arg1 ;
-(NSRange)range;
-(void)setRange:(NSRange)arg1 ;
-(void)setRangeStart:(unsigned long long)arg1 ;
@end
