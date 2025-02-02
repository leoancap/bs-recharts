// http://recharts.org/en-US/api/Bar
open Utils;

[@mel.module "recharts"] [@react.component]
external make:
  (
    ~animationBegin: int=?,
    ~animationDuration: int=?,
    ~animationEasing: [@mel.string] [
                        | `ease
                        | [@mel.as "ease-in"] `easeIn
                        | [@mel.as "ease-out"] `easeOut
                        | [@mel.as "ease-in-out"] `easeInOut
                        | `linear
                      ]
                        =?,
    ~background: 'background=?,
    ~barSize: int=?,
    ~className: string=?,
    ~cursor: string=?,
    ~data: array('data)=?,
    ~dataKey: 'dataKey,
    ~fill: string=?,
    ~id: string=?,
    ~isAnimationActive: bool=?,
    ~label: 'label=?,
    ~layout: layout=?,
    ~legendType: legendType=?,
    ~maxBarSize: int=?,
    ~minPointSize: int=?,
    ~name: string=?,
    ~onClick: (Js.t({.. "payload": 'dataItem}), int, React.Event.Mouse.t) =>
              unit
                =?,
    ~onMouseDown: (Js.t({.. "payload": 'dataItem}), React.Event.Mouse.t) =>
                  unit
                    =?,
    ~onMouseEnter: (
                     Js.t({.. "payload": 'dataItem}),
                     int,
                     React.Event.Mouse.t
                   ) =>
                   unit
                     =?,
    ~onMouseLeave: (
                     Js.t({.. "payload": 'dataItem}),
                     int,
                     React.Event.Mouse.t
                   ) =>
                   unit
                     =?,
    ~onMouseMove: (Js.t({.. "payload": 'dataItem}), React.Event.Mouse.t) =>
                  unit
                    =?,
    ~onMouseOut: (Js.t({.. "payload": 'dataItem}), React.Event.Mouse.t) =>
                 unit
                   =?,
    ~onMouseOver: (Js.t({.. "payload": 'dataItem}), React.Event.Mouse.t) =>
                  unit
                    =?,
    ~onMouseUp: (Js.t({.. "payload": 'dataItem}), React.Event.Mouse.t) => unit
                  =?,
    ~radius: array(int)=?,
    ~shape: 'shape=?,
    ~stackId: string=?,
    ~unit: string=?,
    ~xAxisId: string=?,
    ~yAxisId: string=?,
    ~children: React.element=?
  ) =>
  React.element =
  "Bar";
