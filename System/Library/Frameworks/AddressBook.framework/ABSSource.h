/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:48 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <libobjc.A.dylib/ABSRecord.h>

@class ABSAddressBook, CNAccount, CNMutableContainer, NSString;

@interface ABSSource : NSObject <ABSRecord> {

	int _revertedRecordID;
	ABSAddressBook* _addressBook;
	ABSSource* _source;
	CNAccount* _account;
	CNMutableContainer* _cnImpl;

}

@property (assign,nonatomic) int revertedRecordID;                             //@synthesize revertedRecordID=_revertedRecordID - In the implementation block
@property (nonatomic,readonly) int id; 
@property (nonatomic,readonly) unsigned type; 
@property (assign,nonatomic,__weak) ABSAddressBook * addressBook;              //@synthesize addressBook=_addressBook - In the implementation block
@property (assign,nonatomic,__weak) ABSSource * source;                        //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) NSString * compositeName; 
@property (nonatomic,readonly) CNAccount * account;                            //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) CNMutableContainer * cnImpl;                      //@synthesize cnImpl=_cnImpl - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * CNIdentifierString; 
-(unsigned long long)_cfTypeID;
-(const void*)copyValueForProperty:(int)arg1 ;
-(unsigned)type;
-(void)setSource:(ABSSource *)arg1 ;
-(ABSSource *)source;
-(CNMutableContainer *)cnImpl;
-(void)setCnImpl:(CNMutableContainer *)arg1 ;
-(BOOL)setValue:(void*)arg1 forProperty:(int)arg2 withError:(_CFError*)arg3 ;
-(BOOL)removeProperty:(int)arg1 withError:(id*)arg2 ;
-(void)replaceRecordStorageWithCNObject:(id)arg1 ;
-(NSString *)CNIdentifierString;
-(int)revertedRecordID;
-(void)setRevertedRecordID:(int)arg1 ;
-(id)initWithMutableContainer:(id)arg1 ;
-(id)getAccount;
-(void)updateAllValuesWithValuesFromContainer:(id)arg1 ;
-(NSString *)compositeName;
-(CNAccount *)account;
-(ABSAddressBook *)addressBook;
-(void)setAddressBook:(ABSAddressBook *)arg1 ;
-(int)id;
@end

