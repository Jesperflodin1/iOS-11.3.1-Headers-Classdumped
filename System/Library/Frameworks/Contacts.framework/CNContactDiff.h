/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:00 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface CNContactDiff : NSObject {

	NSArray* _updates;

}

@property (copy,readonly) NSArray * updates;              //@synthesize updates=_updates - In the implementation block
+(id)diffContact:(id)arg1 to:(id)arg2 error:(id*)arg3 ;
-(id)description;
-(NSArray *)updates;
-(id)initWithUpdates:(id)arg1 ;
-(BOOL)applyToABPerson:(void*)arg1 error:(id*)arg2 ;
-(void)applyToMutableContact:(id)arg1 withIdentifierMap:(id)arg2 ;
-(void)applyToMutableContacts:(id)arg1 withIdentifierMap:(id)arg2 ;
-(id)contactByApplyingUpdatesToContact:(id)arg1 ;
@end
