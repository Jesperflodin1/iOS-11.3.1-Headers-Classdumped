/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:48 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface ABSConstantsMapping : NSObject {

	NSDictionary* _mapping;
	id _defaultConstant;

}

@property (nonatomic,retain) NSDictionary * mapping;              //@synthesize mapping=_mapping - In the implementation block
@property (nonatomic,retain) id defaultConstant;                  //@synthesize defaultConstant=_defaultConstant - In the implementation block
+(id)CNToABSourceTypeConstantsMapping;
+(id)ABToCNContainerTypeConstantsMapping;
+(id)ABtoCNContactDisplayNameOrderConstantsMapping;
+(id)CNToABCompositeNameFormatConstantsMapping;
+(id)ABToCNContactSortOrderConstantsMapping;
+(id)ABToCNLabelConstantsMapping;
+(id)CNToABLabelConstantsMapping;
+(id)ABToCNPersonInstantMessageConstantsMapping;
+(id)CNToABPersonInstantMessageConstantsMapping;
+(id)ABToCNPersonSocialProfileConstantsMapping;
+(id)CNToABPersonSocialProfileConstantsMapping;
+(id)CNToABPersonSortOrderingConstantsMapping;
+(id)ABToCNPersonKindConstantsMapping;
+(id)ABToCNPersonAddressConstantsMapping;
+(id)CNToABPersonKindConstantsMapping;
+(id)CNToABPersonAddressConstantsMapping;
-(id)mappedConstant:(id)arg1 ;
-(id)initWithMapping:(id)arg1 ;
-(id)invertedMapping;
-(void)setDefaultConstant:(id)arg1 ;
-(id)defaultConstant;
-(NSDictionary *)mapping;
-(void)setMapping:(NSDictionary *)arg1 ;
@end

