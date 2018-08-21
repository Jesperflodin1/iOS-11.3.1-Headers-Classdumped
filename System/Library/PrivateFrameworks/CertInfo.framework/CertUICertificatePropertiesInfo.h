/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CertInfo/CertInfo-Structs.h>
@class NSArray;

@interface CertUICertificatePropertiesInfo : NSObject {

	NSArray* _sections;
	NSArray* _sectionTitles;

}

@property (nonatomic,retain) NSArray * sections;                   //@synthesize sections=_sections - In the implementation block
@property (nonatomic,retain) NSArray * sectionTitles;              //@synthesize sectionTitles=_sectionTitles - In the implementation block
-(id)initWithTrust:(SecTrustRef)arg1 ;
-(void)_setup:(id)arg1 ;
-(NSArray *)sectionTitles;
-(void)setSections:(NSArray *)arg1 ;
-(NSArray *)sections;
-(id)initWithSendableCertificateProperties:(id)arg1 ;
-(id)initWithCertificate:(SecCertificateRef)arg1 ;
-(id)initWithCertificateProperties:(id)arg1 ;
-(id)_sendablePropertiesFromTrust:(SecTrustRef)arg1 ;
-(id)_sectionsFromProperties:(id)arg1 ;
-(id)_sendablePropertiesFromProperties:(id)arg1 ;
-(id)_cellInfosForSection:(id)arg1 ;
-(id)_sectionInfoForCertSection:(id)arg1 title:(id)arg2 ;
-(id)_sendablePropertyFromProperty:(id)arg1 ;
-(id)_copyPropertiesFromTrust:(SecTrustRef)arg1 ;
-(void)setSectionTitles:(NSArray *)arg1 ;
@end

