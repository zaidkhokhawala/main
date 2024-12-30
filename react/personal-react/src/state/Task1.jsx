import React, { useState } from 'react'

function Task1() {
    const [formdata, setformdata] = useState({ name: "", city: "" })
    const [data, setdata] = useState([])
    const inputcng = (e) => {
        setformdata({ ...formdata, [e.target.name]: e.target.value })
    }
    const sub = () => {
        const addid = { ...formdata, id: Date.now() }
        setdata([...data, addid])
        setformdata({ name: "", city: "" })
    }

    const del = (id)=>{
     const deldata = data.filter((item)=>item.id !== id)
     setdata(deldata)
    }

    return (
        <div>
            <div className='container ' >
                <form className='' onSubmit={e => e.preventDefault()} >
                    <div className="mb-3 mt-3 mr-5 ml-5">
                        <label className="form-label">Name :</label>
                        <input type="text" className="form-control" onChange={inputcng} value={formdata.name} placeholder="Enter name" name="name" />
                    </div>
                    <div className="mb-3">
                        <label className="form-label">City :</label>
                        <input type="text" className="form-control" onChange={inputcng} value={formdata.city} placeholder="Enter city" name="city" />
                    </div>
                    <button type="submit" onClick={sub} className="btn btn-primary">Submit</button>
                </form></div>
            <br />
            <table className="table table-striped table-bordered table-hover">
                <thead> <tr>
                    <th scope="col">id</th>
                    <th scope="col">name</th>
                    <th scope="col">city</th>
                    <th scope="col">edit</th>
                    <th scope="col">delete</th>
                </tr>
                </thead>
                <tbody>
                    {data.map((item) =>
                        <tr key={item.id}>
                            <th scope="col">{item.id}</th>
                            <th scope="col">{item.name}</th>
                            <th scope="col">{item.city}</th>
                            <th scope="col">edit</th>
                            <button onClick={()=>del(item.id)} scope="col">delete</button>
                        </tr>)}
                </tbody>
            </table>

        </div>
    )
}

export default Task1