/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RTCPReportProvider <NSObject>
@optional
-(unsigned)getRTCPReportNTPTimeMiddle32ForReportId:(unsigned char)arg1;
-(unsigned)getExtendedSequenceNumberForSequenceNumber:(unsigned short)arg1;

@required
-(BOOL)generateReceptionReportList:(RTCP_RECEPTION_REPORT*)arg1 reportCount:(char*)arg2;

@end

