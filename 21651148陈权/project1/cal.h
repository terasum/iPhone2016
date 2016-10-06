# include<Foundation/Foundation.h>
// do not output the detail information
#define NSLog(FORMAT, ...) printf("%s\n", [[NSString stringWithFormat:FORMAT, ##__VA_ARGS__] UTF8String])

//printFormatter

@interface MonthFormatter:NSObject
        //当月第一天的星期数目
        @property NSUInteger firstDayWeekDay;
        //当月的最大天数
        @property NSUInteger maxRangeOfMonth;
        //目前月份
        @property int monthIndator;
       //当前年份
        @property int yearIndator; 

        @property int* monthArray;

    // - (void) setFirstDayWeekDay:(NSUInteger)day;
    - (NSMutableArray * ) getArray;

    //- (void) setFirstDayWeekDay:(NSUInteger)day;
    //- (NSUInteger) firstDayWeekDay;

     //- (void) setMaxRangeOfMonth:(NSUInteger)MaxMon;
    //- (NSUInteger) maxRangeOfMonth;

    //- (void) setMonthIndator:(int)monInd;
    //- (int) monthIndator;

    //- (void) setYearIndator:(int)yearInd;
    //- (int) yearIndator;

    +(MonthFormatter * ) initByMonth:(int) m AndYear:(int) y;

    + (int) judgeRangeByMonth:(int)mon AndYear:(int) year;
  //打印方法
    - (void) print ;
@end

@interface YearFormatter:NSObject
   //当前年份
    @property int yearIndator;
    + (YearFormatter *) initWithYear:(int)y;
    //- (void) setYearIndator:(int)yearInd;
    //- (int) yearIndator;


  //打印方法
    - (void) print ;
@end