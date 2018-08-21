/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:04 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, ICDataPersister;

@interface ICNotePasteboardData : NSObject <NSSecureCoding> {

	NSData* _attributedStringData;
	ICDataPersister* _dataPersister;

}

@property (nonatomic,readonly) NSData * attributedStringData;                //@synthesize attributedStringData=_attributedStringData - In the implementation block
@property (nonatomic,readonly) ICDataPersister * dataPersister;              //@synthesize dataPersister=_dataPersister - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)pasteboardDataFromPersistenceData:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(ICDataPersister *)dataPersister;
-(NSData *)attributedStringData;
-(id)initWithAttributedStringData:(id)arg1 dataPersister:(id)arg2 ;
-(id)persistenceData;
@end

